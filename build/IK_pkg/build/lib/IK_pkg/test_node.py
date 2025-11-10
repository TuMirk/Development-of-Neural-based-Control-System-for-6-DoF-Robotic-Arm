import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from std_srvs.srv import Trigger  # Using a simple built-in service

class CommandSubscriber(Node):
    def __init__(self):
        super().__init__('command_subscriber')
        self.subscription = self.create_subscription(
            Float32,  # Use Float32 to match your publisher
            'command',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

        # Create a Trigger service
        self.srv = self.create_service(Trigger, 'do_something', self.handle_service)

    def listener_callback(self, msg):
        self.get_logger().info(f'Received command: {msg.data}')
        # Call the service when a message is received
        req = Trigger.Request()
        future = self.call_service(req)
        # Optionally, you can process the response if needed

    def call_service(self, req):
        # Call the service asynchronously
        client = self.create_client(Trigger, 'do_something')
        while not client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')
        return client.call_async(req)

    def handle_service(self, request, response):
        self.get_logger().info('Service was called!')
        response.success = True
        response.message = "Service executed successfully!"
        return response

def main(args=None):
    rclpy.init(args=args)
    node = CommandSubscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()