#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <vector>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"

using namespace std::chrono_literals;

class JointPublisher : public rclcpp::Node
{
public:
    JointPublisher() : Node("joint_publisher")
    {
        // Initialize the publisher for joint states
        joint_state_publisher_ = this->create_publisher<sensor_msgs::msg::JointState>("joint_states", 10);
        timer_ = this->create_wall_timer(
            100ms, std::bind(&JointPublisher::publish_joint_states, this));

        // Define the names for the wheel joints
        joint_names_ = {"wheel_joint_front_left", "wheel_joint_front_right", 
                        "wheel_joint_back_left", "wheel_joint_back_right"};

        joint_positions_ = {0.0, 0.0, 0.0, 0.0};   // Initial joint positions
        joint_velocities_ = {0.0, 0.0, 0.0, 0.0};  // Initial joint velocities
        joint_efforts_ = {0.0, 0.0, 0.0, 0.0};     // Initial joint efforts
    }

private:
    void publish_joint_states()
    {
        auto message = sensor_msgs::msg::JointState();
        message.header.stamp = this->get_clock()->now();

        // Fill the joint state message
        message.name = joint_names_;
        message.position = joint_positions_;
        message.velocity = joint_velocities_;
        message.effort = joint_efforts_;

        // Update positions to simulate movement (this would be replaced with real data)
        for (size_t i = 0; i < joint_positions_.size(); i++) {
            joint_positions_[i] += 0.01;  // Simulate small joint movement
        }

        // Publish the joint state message
        joint_state_publisher_->publish(message);
    }

    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr joint_state_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    // Joint information for the four wheels
    std::vector<std::string> joint_names_;
    std::vector<double> joint_positions_;
    std::vector<double> joint_velocities_;
    std::vector<double> joint_efforts_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JointPublisher>());
    rclcpp::shutdown();
    return 0;
}
