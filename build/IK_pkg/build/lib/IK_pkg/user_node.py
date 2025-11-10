#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from interfaces.srv import ComputeIK, ControlMotor

#-------------------------USER NODE-------------------------
class UserNode(Node):
    def __init__(self):
        super().__init__("user_node")
        self.number_subscriber_ = self.create_subscription(Float32, "command", self.callback_number, 10)
        self.IK_client = self.create_client(ComputeIK, "compute_IK")
        self.motor_client = self.create_client(ControlMotor, "control_motor")
        self.get_logger().info("User Node is ready to receive requests.")

#--------callback when receiving msg from BCI NODE----------
    def callback_number(self, msg: Float32):
        # Send the desired configuration to COMPUTATION NODE via service
        self.call_compute_IK(msg.data)

#--------call COMPUTE IK SERVICE----------------------------
    def call_compute_IK(self, desire):
        f_list = [14.0, 14.5, 15.0, 15.5, 16.0, 16.5, 17.0, 17.5, 18.0]
        pos_list = [(8,8), (5,1), (8,1), (1,5), (1,8), (5,8), (1,1), (8,5), (5,5)]
        mapping = dict(zip(f_list, pos_list))
        ik_request = ComputeIK.Request()
        ik_request.row = mapping[desire][0]
        ik_request.col = mapping[desire][1]
        print(f"\033[93mMoving to: row {mapping[desire][0]} - column {mapping[desire][1]}\033[0m")
        # Send the request and handle the response asynchronously
        compute_IK_future = self.IK_client.call_async(ik_request)
        compute_IK_future.add_done_callback(self.callback_compute_IK_response)

#--------callback when receiving response of COMPUTE IK SERVICE----------
    def callback_compute_IK_response(self, compute_IK_future):
        try:
            response = compute_IK_future.result()
            # self.get_logger().info(f"Desired integer values: {response.integer_values}")
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")
        # Send the integer values to MOTOR NODE via service
        self.call_control_motor(response.integer_values)
             
#--------call CONTROL MOTOR SERVICE----------------------------
    def call_control_motor(self, joint_angles):
        motor_request = ControlMotor.Request()
        motor_request.integer_values = joint_angles     
        # Send the request and handle the response asynchronously
        control_motor_future = self.motor_client.call_async(motor_request)
        control_motor_future.add_done_callback(self.callback_control_motor_response)

#--------callback when receiving response of CONTROL MOTOR SERVICE----------
    def callback_control_motor_response(self, control_motor_future):
        try:
            response = control_motor_future.result()
            # self.get_logger().info(f"Final joint angles: {response.final_joint_angles}")
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")

def main(args=None):
    rclpy.init(args=args)
    node = UserNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()