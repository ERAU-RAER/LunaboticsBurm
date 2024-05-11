import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import String
import serial
import threading


class SerialLinacNode(Node):
    def __init__(self):
        super().__init__('serial_linac_node')

        # Retrieve parameters
        self.declare_parameter('serial_port', '/dev/ttyACM1')
        self.serial_port = self.get_parameter('serial_port').value

        self.declare_parameter('baud_rate', 9600)
        self.baud_rate = self.get_parameter('baud_rate').value

        # Serial port configuration
        port = self.serial_port
        baudrate = self.baud_rate
        
        try:
            self.serial_port = serial.Serial(port, baudrate)
            self.get_logger().info(f"Serial port {port} opened successfully")
        except serial.SerialException:
            self.get_logger().error(f"Failed to open serial port {port}")
            raise
        
        # Subscribe to cmd_vel topic
        self.subscription = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.cmd_vel_callback,
            10)
        
        # Publisher for received serial messages
        self.serial_pub = self.create_publisher(String, '/linac_chatter', 10)

    def cmd_vel_callback(self, msg):
        if self.serial_port.is_open:
            # Extract linear and angular velocities
            linear_x = msg.linear.x
            linear_y = msg.linear.y
            linear_z = msg.linear.z
            angular_x = msg.angular.x
            angular_y = msg.angular.y
            angular_z = msg.angular.z
            
            # Format velocities as string
            cmd_str = f"{linear_x},{linear_y},{linear_z},{angular_x},{angular_y},{angular_z}"
            cmd_str += "/"
            
            # Send command over serial
            self.serial_port.write(cmd_str.encode())
            self.get_logger().info(f"Sending: {cmd_str}")
        else:
            self.get_logger().error("Serial port is not open")

    def read_serial(self):
        while self.serial_port.is_open:
            try:
                # Read serial message
                serial_msg = self.serial_port.readline().decode().strip()
                # self.get_logger().info(f"Received serial message: {serial_msg}")
                # This is kinda unreadable when using the log^ Just echo the topic instead

                # Publish the received serial message
                msg = String()
                msg.data = serial_msg
                self.serial_pub.publish(msg)
            except Exception as e:
                self.get_logger().error(f"Error reading serial: {str(e)}")

    def __del__(self):
        if self.serial_port.is_open:
            self.serial_port.close()
            self.get_logger().info("Serial port closed")

def main(args=None):
    rclpy.init(args=args)
    serial_linac_node = SerialLinacNode()
    
    # Start a separate thread to continuously read serial messages
    serial_thread = threading.Thread(target=serial_linac_node.read_serial)
    serial_thread.start()
    
    try:
        rclpy.spin(serial_linac_node)
    except KeyboardInterrupt:
        pass
    
    serial_linac_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
