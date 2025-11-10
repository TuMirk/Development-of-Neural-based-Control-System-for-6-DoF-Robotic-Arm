#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from interfaces.srv import ControlMotor
import numpy as np

class MotorNode(Node):
    def __init__(self):
        super().__init__("motor_node")
        self.IK_server = self.create_service(ControlMotor, "control_motor", self.callback_control_motor)
        self.get_logger().info("Motor Server is ready to receive requests.")

    def callback_control_motor(self, request: ControlMotor.Request, response: ControlMotor.Response):
        print()
        for i in range(0, 6):
            print(f"Joint {i+1} angle (in radians): {request.desired_joint_angles[i]}")
        
        print()
        response.final_joint_angles = [angle * 10 for angle in request.desired_joint_angles]
        print(f"Motor angles (in degrees): {response.final_joint_angles}")
        return response


def main(args=None):
    rclpy.init(args=args)
    node = MotorNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
