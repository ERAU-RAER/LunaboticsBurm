import rclpy
from rclpy.node import Node
import serial
from custom_interfaces.msg import SerialRead

class SerialHandler(Node):
    def __init__(self):
        super().__init__('serial_handler')
        self.publisher_ = self.create_publisher(SerialRead,'serial_read',10)
        timer_period  = 1 #s
        self.timer = self.create_timer(timer_period,self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = SerialRead()
        msg.identifier = 'test'
        msg.data = self.i.to_bytes(4,'big')
        print(msg.data)
        self.publisher_.publish(msg)
        #self.get_logger().info('Publishing: %s' % msg.data.decode("utf-8"))
        self.i += 1

def main():
    rclpy.init()

    serial_handler = SerialHandler()

    rclpy.spin(serial_handler)

    serial_handler.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
