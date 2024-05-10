import rclpy

from sensor_msgs.msg import Joy

from geometry_msgs.msg import Twist



class JoyToCmdVel:

    def __init__(self):

        self.node = rclpy.create_node('joy_to_cmdvel')

        self.joy_sub = self.node.create_subscription(Joy, 'joy', self.joy_callback, 10)

        self.cmdvel_pub = self.node.create_publisher(Twist, 'cmd_vel', 10)


    # Convert joy message into twist message
    def joy_callback(self, msg):

        twist_msg = Twist()

        twist_msg.linear.x = (-(msg.axes[5]-1) + (msg.axes[2]-1))/2 # forward/Backward
        twist_msg.angular.z = -(msg.axes[0]) # left/right
        twist_msg.linear.z = msg.axes[7] # bucket veritcle travel
        twist_msg.angular.y = float(msg.buttons[5] - msg.buttons[4]) # bucket rotation
        twist_msg.angular.x = float(msg.buttons[1]) #vibrate bucket

        self.cmdvel_pub.publish(twist_msg)



def controller(args=None):

    rclpy.init(args=args)

    joy_to_cmdvel = JoyToCmdVel()

    rclpy.spin(joy_to_cmdvel.node)

    joy_to_cmdvel.node.destroy_node()

    rclpy.shutdown()



if __name__ == '__main__':

    main()



