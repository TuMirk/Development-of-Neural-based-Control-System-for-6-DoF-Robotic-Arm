#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from interfaces.srv import ControlMotor
import numpy as np
from dynamixel_sdk import *

ADDR_PROFILE_VELOCITY   = 112
ADDR_GOAL_POSITION      = 116
ADDR_PRESENT_POSITION   = 132
ADDR_TORQUE_ENABLE      = 64
LOCK_TORQUE             = 1
UNLOCK_TORQUE           = 0

class MotorNode(Node):
    def __init__(self):
        super().__init__("motor_node")
        self.IK_server = self.create_service(ControlMotor, "control_motor", self.callback_control_motor)
        self.get_logger().info("Motor Node is ready to receive requests.")

    def callback_control_motor(self, request: ControlMotor.Request, response: ControlMotor.Response):

        response.final_joint_angles = [0.0] * 6
        # Set the port and packet handlers
        portHandler = PortHandler('/dev/ttyUSB0')
        packetHandler = PacketHandler(2.0)

        # Open the port and set the baud rate
        if not portHandler.openPort():
            print("Failed to open the port")
            return response
        if not portHandler.setBaudRate(1000000):
            print("Failed to set the baud rate")
            return response

        # Motor ID
        motor_id = [0, 1, 2, 3, 4, 5]

        # Prepare the goal position and velocity
        profile_velocity = 20
        goal_position = [request.integer_values[0], request.integer_values[1], request.integer_values[2],
                          0, request.integer_values[3], 1024]

        # Update profile velocity if needed
        for id in range(0, 6):
            prf_vel, _, _ = packetHandler.read4ByteTxRx(portHandler, motor_id[id], ADDR_PROFILE_VELOCITY)
            if prf_vel != profile_velocity:
                comm_result, error = packetHandler.write4ByteTxRx(portHandler, motor_id[id],
                                                                  ADDR_PROFILE_VELOCITY, profile_velocity)                

        # Lock torque for all motors if needed
        for id in range(0, 6):
            torque, _, _ = packetHandler.read4ByteTxRx(portHandler, motor_id[id], ADDR_TORQUE_ENABLE)
            if torque != LOCK_TORQUE:
                comm_result, error = packetHandler.write4ByteTxRx(portHandler, motor_id[id],
                                                                  ADDR_TORQUE_ENABLE, LOCK_TORQUE) 
        
        # Move motors to goal position
        current, _, _ = packetHandler.read4ByteTxRx(portHandler, motor_id[2], ADDR_PRESENT_POSITION)
        # print("current: ", current)
        # print("joint 3:", goal_position[2])
        for id in range(0, 6):
            if current <= goal_position[2]:
                comm_result, error = packetHandler.write4ByteTxRx(portHandler, motor_id[5-id],
                                                              ADDR_GOAL_POSITION, goal_position[5-id])
            else:
                comm_result, error = packetHandler.write4ByteTxRx(portHandler, motor_id[id],
                                                              ADDR_GOAL_POSITION, goal_position[id])
            time.sleep(2.0)

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
