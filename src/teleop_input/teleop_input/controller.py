import rclpy
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist


class JoyToCmdVel:
    def __init__(self):
        self.node = rclpy.create_node('joy_to_cmdvel')
        self.joy_sub = self.node.create_subscription(Joy, 'joy', self.joy_callback, 10)
        self.cmdvel_pub = self.node.create_publisher(Twist, 'cmd_vel', 10)
        self.timer = self.node.create_timer(0.25, self.throttle)
        self.twist_msg = Twist()
        self.linear_x = 0.0

    def throttle(self):
        if self.linear_x > 0:
            self.twist_msg.linear.x = min(self.twist_msg.linear.x + 0.1, 1.0)
        elif self.linear_x < 0:
            self.twist_msg.linear.x = max(self.twist_msg.linear.x - 0.1, -1.0)
        if abs(self.twist_msg.linear.x) < 0.01:
            self.twist_msg.linear.x = 0.0
            
        self.publish_twist()

    def joy_callback(self, msg):
        # Process joystick input and generate Twist message
        self.twist_msg.angular.z = msg.axes[0]  # Assuming X-axis of the joystick for rotation
        self.twist_msg.linear.z = msg.axes[7]
        self.twist_msg.angular.y = msg.axes[6]

        # Map right trigger to increase linear.x and left trigger to decrease linear.x
        self.linear_x = msg.axes[5] - msg.axes[2]
        
        if msg.buttons[4]: # Left Bumper
            self.twist_msg.linear.x = 0.5
        elif msg.buttons[5]:
            self.twist_msg.linear.x = -0.5

        if msg.buttons[0]:
            self.twist_msg.linear.y = 1.0
        elif msg.buttons[1]:
            self.twist_msg.linear.y = 2.0
        elif msg.buttons[2]:
            self.twist_msg.linear.y = 3.0
        elif msg.buttons[3]:
            self.twist_msg.linear.y = 4.0

        self.publish_twist()

    def publish_twist(self):
        self.cmdvel_pub.publish(self.twist_msg)

def controller(args=None):
    rclpy.init(args=args)
    joy_to_cmdvel = JoyToCmdVel()
    rclpy.spin(joy_to_cmdvel.node)
    joy_to_cmdvel.node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()



