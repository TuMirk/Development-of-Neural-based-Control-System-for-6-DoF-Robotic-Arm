#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

class BCINode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("bci_node_test")
        self.publisher_ = self.create_publisher(Float32, "command", 10)
        self.get_logger().info("BCI Node Test is ready to receive requests.")

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