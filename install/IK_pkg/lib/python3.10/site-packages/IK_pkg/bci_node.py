#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

import time
from brainflow.board_shim import BoardShim, BrainFlowInputParams, BoardIds
from brainflow.data_filter import DataFilter, FilterTypes, NoiseTypes
import numpy as np
from sklearn.cross_decomposition import CCA

class BCINode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("bci_node")
        self.publisher_ = self.create_publisher(Float32, "command", 10)

def standard_cca(signal, sampling_rate, fund_frequency, num_harmonics, fund_phase, *args, **kwargs):
    pts, _ = np.shape(signal)
    # empty sin/cos waves as reference
    reference_signal = np.zeros((pts, 2*num_harmonics))
    # time points 
    T = np.linspace(1.0, pts, pts)/sampling_rate
    # Give values to the sin/cos waves
    for i in range(num_harmonics):
        reference_signal[:, 2*i] = np.transpose(np.sin(2*np.pi*fund_frequency*T + fund_phase*i))
        reference_signal[:, 2*i+1] = np.transpose(np.cos(2*np.pi*fund_frequency*T + fund_phase*i))
    # Apply CCA
    cca = CCA(n_components=1)
    cca.fit(signal, reference_signal)
    signal_optimized, reference_signal_optimized = cca.transform(signal, reference_signal)
    corr = np.corrcoef(signal_optimized.T, reference_signal_optimized.T)
    # Return the max correlation
    return corr[0, 1]

def main(args=None):
    f_list = [14.0, 14.5, 15.0, 15.5, 16.0, 16.5, 17.0, 17.5, 18.0]
    ph_list = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    sfreq = 250
    # Set up BrainFlow parameters
    params = BrainFlowInputParams()
    params.serial_port = '/dev/ttyUSB0'
    try:
        board_id =  BoardIds.CYTON_BOARD
        board = BoardShim(board_id, params)
        board.prepare_session()
        print("Successfully prepared physical board.")
    except Exception as e:
        print(e)
        print("Device could not be found. Synthetic board will be used.")
        board_id = BoardIds.SYNTHETIC_BOARD
        board = BoardShim(board_id, params)
        board.prepare_session()    
    # Start streaming data and save to a file
    print("Starting data stream...")
    board.start_stream(45000, 'file://stream_data.csv:w')
    # Start BCI NODE
    rclpy.init(args=args)
    node = BCINode()
    pred_consecutive = 0
    pred = 0.0
    # Transmitt epoch every 3.0 seconds
    try:
        while rclpy.ok():
            time.sleep(3.0)
            raw_data = board.get_current_board_data(750)[1:9]
            # Apply CAR
            data = raw_data - np.mean(raw_data, axis=0, keepdims=True)
            data /= 1000000
            # Apply bandpass filter
            for ch in range(data.shape[0]):
                DataFilter.perform_bandpass(
                    data=data[ch],
                    sampling_rate=sfreq,
                    start_freq=13.5,
                    stop_freq=18.5,
                    order=4,
                    filter_type=FilterTypes.BESSEL_ZERO_PHASE,
                    ripple=0.0
                )
                DataFilter.remove_environmental_noise(
                    data=data[ch],
                    sampling_rate=sfreq,
                    noise_type=NoiseTypes.FIFTY.value
                )
            
            transposed_data = data.T
            index_max = 99
            corr_max = 0.0
            corr_list = [0] * len(f_list)
            for stimulus_index in range(len(f_list)):
                stimulus_freq = f_list[stimulus_index]
                stimulus_phase = ph_list[stimulus_index]
                # Apply CCA
                corr = standard_cca(
                    signal=transposed_data,
                    sampling_rate=sfreq,
                    fund_frequency=stimulus_freq,
                    num_harmonics=1,
                    fund_phase=stimulus_phase,
                )
                corr_list[stimulus_index] = corr
                if corr >= corr_max:
                    corr_max = corr
                    index_max = stimulus_index
            print(f"Correlation list {corr_list}")
            # Reject low correlation
            if corr_max < 0.2:
                pred = 0.0
                pred_consecutive = 0
                print("reset")
                continue
            else:
                # Detect different frequencies
                if f_list[index_max] != pred:
                    pred = f_list[index_max] 
                    pred_consecutive = 1
                    print(f"new {pred}")
                # Detect same frequency
                elif f_list[index_max] == pred:
                    pred_consecutive += 1
                    print(f"same {pred}")
            # Publish prediction if it is stable for 3 consecutive epochs                               
            if pred_consecutive == 3:                
                msg = Float32()
                msg.data = pred
                node.publisher_.publish(msg)
                node.get_logger().warn(f'Publishing prediction: {msg.data}')
                pred = 0.0
                pred_consecutive = 0                

    except KeyboardInterrupt:
        pass

    rclpy.shutdown()

if __name__ == "__main__":
    main()