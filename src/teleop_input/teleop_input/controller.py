import rclpy

from sensor_msgs.msg import Joy

from geometry_msgs.msg import Twist



class JoyToCmdVel:

    def __init__(self):

        self.node = rclpy.create_node('joy_to_cmdvel')

        self.joy_sub = self.node.create_subscription(Joy, 'joy', self.joy_callback, 10)

        self.cmdvel_pub = self.node.create_publisher(Twist, 'cmd_vel', 10)



    def joy_callback(self, msg):

        # Process joystick input and generate Twist message

        twist_msg = Twist()

        twist_msg.linear.x = msg.axes[5]  # Assuming Y-axis of the joystick for forward/backward motion

        twist_msg.angular.z = msg.axes[4]  # Assuming X-axis of the joystick for rotation

        twist_msg.linear.z = msg.axes[1]
  
        twist_msg.angular.y = msg.axes[0]


        # Publish Twist message

        self.cmdvel_pub.publish(twist_msg)



def controller(args=None):

    rclpy.init(args=args)

    joy_to_cmdvel = JoyToCmdVel()

    rclpy.spin(joy_to_cmdvel.node)

    joy_to_cmdvel.node.destroy_node()

    rclpy.shutdown()



if __name__ == '__main__':

    main()



