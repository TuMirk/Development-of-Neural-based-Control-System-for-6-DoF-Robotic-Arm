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

def main(args=None):
    rclpy.init(args=args)
    node = BCINode() # MODIFY NAME
    try:
        while rclpy.ok():
            user_input = input("Enter a number to publish (or 'q' to quit): ")
            if user_input.lower() == 'q':
                break
            try:
                number = float(user_input)
                msg = Float32()
                msg.data = number
                node.publisher_.publish(msg)
                print(f"\033[93mPublished: {number}\033[0m")
            except ValueError:
                print("Invalid input. Please enter a valid number.")
    except KeyboardInterrupt:
        pass

    rclpy.shutdown()

if __name__ == "__main__":
    main()