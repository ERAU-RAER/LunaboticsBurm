#ifndef DD_Kinematics_H
#define DD_Kinematics_H

#include "Arduino.h"

class DD_Kinematics
{

    public:
        struct output
        {
            int motor1;
            int motor2;
        };
        struct velocities
        {
            float linear_x;
            float linear_y;
            float angular_z;
        };
        DD_Kinematics(int motor_max_rpm, float wheel_diameter, float wheel_dist, int pwm_bits);
        velocities getVelocities(int motor1, int motor2);
        output getRPM(float linear_x, float linear_y, float angular_z);
        output getPWM(float linear_x, float linear_y, float angular_z);
        int RPMtoPWM(int rpm);

    private:
        float linear_vel_x_mins_;
        float linear_vel_y_mins_;
        float angular_vel_z_mins_;
        float circumference_;
        float tangential_vel_;
        float x_rpm_;
        float y_rpm_;
        float tan_rpm_;
        int max_rpm_;
        float wheel_dist_;
        float pwm_res_;
};

#endif