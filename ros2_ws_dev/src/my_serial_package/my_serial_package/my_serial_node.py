import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial

class SerialNode(Node):
    def __init__(self):
        super().__init__('serial_node')
        
        # Serial port configuration
        port = '/dev/ttyUSB0'  # Change this to your port
        baudrate = 9600  # Adjust baudrate as needed
        
        try:
            self.serial_port = serial.Serial(port, baudrate)
            self.get_logger().info(f"Serial port {port} opened successfully")
        except serial.SerialException:
            self.get_logger().error(f"Failed to open serial port {port}")
            raise
        
        # Subscribe to serialmsg topic
        self.subscription = self.create_subscription(
            String,
            'serialmsg',
            self.serial_callback,
            10)
        self.subscription
    
    def serial_callback(self, msg):
        if self.serial_port.is_open:
            data = msg.data
            self.serial_port.write(data.encode())
            self.get_logger().info(f"Sent message over serial: {data}")
        else:
            self.get_logger().error("Serial port is not open")

    def __del__(self):
        if self.serial_port.is_open:
            self.serial_port.close()
            self.get_logger().info("Serial port closed")

def main(args=None):
    rclpy.init(args=args)
    serial_node = SerialNode()
    try:
        rclpy.spin(serial_node)
    except KeyboardInterrupt:
        pass
    
    serial_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
