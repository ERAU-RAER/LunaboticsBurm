import rclpy
from rclpy.node import Node
import serial
import std_msgs.msg
from custom_interfaces.msg import SerialRead

class SerialListener(Node):
    def __init__(self):
        super().__init__('serial_listener')
        self.subscriber_ = self.create_subscription(SerialRead,'serial_read',self.listener_callback,10)
        self.get_logger().info('Serial Listener Begin')

    def listener_callback(self,msg):
        print(msg.data)
        #self.get_logger().info('I heard: %s from %s' % serial_msg % msg.identifier)

def main():
    rclpy.init()

    serial_listener = SerialListener()

    rclpy.spin(serial_listener)

    serial_listener.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()