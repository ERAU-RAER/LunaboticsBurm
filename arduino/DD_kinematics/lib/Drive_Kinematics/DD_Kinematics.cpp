#include "Arduino.h"
#include "DD_Kinematics.h"

DD_Kinematics::DD_Kinematics(int motor_max_rpm, float wheel_diameter, float wheel_dist, int pwm_bits):
    circumference_(PI * wheel_diameter),
    max_rpm_(motor_max_rpm),
    wheel_dist_(wheel_dist),
    pwm_res_ (pow(2, pwm_bits) - 1)
{
}

DD_Kinematics::output DD_Kinematics::getRPM(float linear_x, float linear_y, float angular_z)
{
    //convert m/s to m/min
    linear_vel_x_mins_ = linear_x * 60;
    linear_vel_y_mins_ = linear_y * 60;

    //convert rad/s to rad/min
    angular_vel_z_mins_ = angular_z * 60;

    //Vt = ω * radius
    tangential_vel_ = angular_vel_z_mins_ * wheel_dist_;

    x_rpm_ = linear_vel_x_mins_ / circumference_;
    y_rpm_ = linear_vel_y_mins_ / circumference_;
    tan_rpm_ = tangential_vel_ / circumference_;

    DD_Kinematics::output rpm;

    rpm.motor1 = x_rpm_ - y_rpm_ - tan_rpm_;
    rpm.motor2 = x_rpm_ + y_rpm_ + tan_rpm_;

    return rpm;
}

DD_Kinematics::output DD_Kinematics::getPWM(float linear_x, float linear_y, float angular_z)
{

    DD_Kinematics::output rpm;
    DD_Kinematics::output pwm;

    //Initialize rpm for RPMtoPWM
    rpm = getRPM(linear_x, linear_y, angular_z);

    //convert from RPM to PWM for both wheels
    pwm.motor1 = RPMtoPWM(rpm.motor1);
    pwm.motor2 = RPMtoPWM(rpm.motor2);

    return pwm;
}

DD_Kinematics::velocities DD_Kinematics::getVelocities(int motor1, int motor2)
{
    DD_Kinematics::velocities vel;

    float average_rps_x = ((float)(motor1 + motor2) / 2) / 60; //Get RPM, then convert to RPS
    vel.linear_x = (average_rps_x * circumference_); // In m/s

    float average_rps_a = ((float)(motor2 - motor1) / 2) / 60;
    vel.angular_z = (average_rps_a * circumference_) / (wheel_dist_ / 2);

    return vel;
}

int DD_Kinematics::RPMtoPWM(int rpm)
{
    //Make rpm a ratio of max_rpm and remap that to a pwm signal
    return (((float) rpm / (float) max_rpm_) * pwm_res_);

}