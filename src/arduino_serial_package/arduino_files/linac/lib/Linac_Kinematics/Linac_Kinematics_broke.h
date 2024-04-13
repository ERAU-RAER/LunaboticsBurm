#pragma once

#include "Arduino.h"

class Linac_Kinematics
{
    public:
        struct output
        {
            int vel_a;
            int vel_b;
        };
        struct velocities
        {
            float actuator_a;
            float actuator_b;
        };
        Linac_Kinematics(int duty_cycle, float mm_per_sec, int pwm_bits);
        velocities getVelocities(float vel_a, float vel_b);
        velocities getPWM(float vel_a, float vel_b);
        int VELtoPWM(int vel);
    
    private:
        float pwm_lim_;
        float max_speed_;
        float pwm_res_;

};