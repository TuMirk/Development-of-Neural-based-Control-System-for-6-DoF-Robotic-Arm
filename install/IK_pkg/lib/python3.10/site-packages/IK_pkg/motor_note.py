#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from interfaces.srv import ControlMotor
import numpy as np
from dynamixel_sdk import *

class MotorNode(Node):
    def __init__(self):
        super().__init__("motor_node")
        self.IK_server = self.create_service(ControlMotor, "control_motor", self.callback_control_motor)
        self.get_logger().info("Motor Server is ready to receive requests.")

    def callback_control_motor(self, request: ControlMotor.Request, response: ControlMotor.Response):
        TORQUE_ENABLE = 1
        TORQUE_DISABLE = 0
        ADDR_TORQUE_ENABLE = 24
        ADDR_GOAL_POSITION = 116
        ADDR_GOAL_VELOCITY = 104
        ADDR_PRESENT_POSITION = 36
        postition_offset = [1024, 1024, 0, 3954, 1024, 0]
        [3009, 1135, 2156, 1080, 3055, 2448]

        # for i in range(0, 6):
        #     response.final_joint_angles[i] = np.degrees(request.initial_guess_joint_angles[i])

        print()
        # Set the port and packet handlers
        portHandler = PortHandler('/dev/ttyUSB0')  # Port to connect to the Dynamixel motor
        packetHandler = PacketHandler(2.0)  # Protocol version 1.0

        # Open the port and set the baud rate
        if not portHandler.openPort():
            print("Failed to open the port")
            return response
        if not portHandler.setBaudRate(1000000):
            print("Failed to set the baud rate")
            return response

        # Motor ID
        motor_id = [0, 1, 2, 3, 4, 5]

        # # Read the current position of the motors
        # present_position = [5555, 5555, 5555, 5555, 5555, 5555]
        # for id in motor_id:
        #     present_position[motor_id], comm_result, error = packetHandler.read2ByteTxRx(portHandler, motor_id, ADDR_PRESENT_POSITION)
        #     if comm_result != COMM_SUCCESS:
        #         print(f"Error reading position for motor {motor_id}: {packetHandler.getTxRxResult(comm_result)}")
        #     elif error != 0:
        #         print(f"Error reading position for motor {motor_id}: {packetHandler.getRxPacketError(error)}")
        #     else:
        #         print(f"Motor {motor_id} current position: {present_position[motor_id]}")


        # Set goal velocity
        goal_velocity = [1, 1, 1, 1, 1, 1]
        goal_position = [0, 0, 0, 0, 0, 0]
        # Set goal position
        for i in range(0, 6):
            goal_position[i] = round(np.degrees(request.desired_joint_angles[i]) / 0.088)
            goal_position[i] = (goal_position[i] + postition_offset[i])%4095

        print("goal_postion: ", goal_position)
        # Write the goal position to the motor (address 30)
        for id in range(0, 6):
            comm_result, error = packetHandler.write4ByteTxRx(portHandler, motor_id[id],
                                                              ADDR_GOAL_VELOCITY, goal_velocity[id])
            if comm_result != COMM_SUCCESS:
                print(f"Error setting goal velocity for motor {motor_id[id]}: {packetHandler.getTxRxResult(comm_result)}")
            elif error != 0:
                print(f"Error setting goal velocity for motor {motor_id[id]}: {packetHandler.getRxPacketError(error)}")
            else:
                print(f"Motor {motor_id[id]} set to velocity {goal_velocity[id]}")
                response.final_joint_angles[id] = goal_position[id] * 0.088            
        # for id in range(0, 6):
        #     comm_result, error = packetHandler.write4ByteTxRx(portHandler, motor_id[id],
        #                                                       ADDR_GOAL_POSITION, goal_position[id])
        #     if comm_result != COMM_SUCCESS:
        #         print(f"Error setting goal position for motor {motor_id[id]}: {packetHandler.getTxRxResult(comm_result)}")
        #     elif error != 0:
        #         print(f"Error setting goal position for motor {motor_id[id]}: {packetHandler.getRxPacketError(error)}")
        #     else:
        #         print(f"Motor {motor_id[id]} set to position {goal_position[id]}")
        #         response.final_joint_angles[id] = goal_position[id] * 0.088

        # Close the port
        portHandler.closePort()
        
        return response

def main(args=None):
    rclpy.init(args=args)
    node = MotorNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
