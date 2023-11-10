import rclpy
from rclpy.node import Node
import serial
from std_msgs.msg import ByteMultiArray
from std_msgs.msg import MultiArrayLayout
from std_msgs.msg import MultiArrayDimension


class SerialHandler(Node):
    def __init__(self):
        super().__init__('serial_handler')
        self.publisher_ = self.create_publisher(ByteMultiArray,'serial_read',10)
        timer_period  = 1 #s
        self.timer = self.create_timer(timer_period,self.timer_callback)
        
        # Create a MultiArrayLayout message
        self.multi_array_layout = MultiArrayLayout()

         # Set the data offset (if needed)
        self.multi_array_layout.data_offset = 0

        # Define dimensions for the array
        dimension = MultiArrayDimension()
        dimension.label = 'bytes'
        dimension.size = 5
        dimension.stride = 1  # Change this based on your array layout

        # Add the dimension to the layout
        self.multi_array_layout.dim.append(dimension)

    def timer_callback(self):
        msg = ByteMultiArray()
        msg.layout = self.multi_array_layout
        msg.data = b"Hello World"
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data.decode("utf-8"))

def main():
    rclpy.init()

    serial_handler = SerialHandler()

    rclpy.spin(serial_handler)

    serial_handler.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
