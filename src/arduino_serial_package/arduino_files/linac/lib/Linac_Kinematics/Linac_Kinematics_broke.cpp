#include "Arduino.h"
#include "Linac_Kinematics_broke.h"

Linac_Kinematics::Linac_Kinematics(int duty_cycle, float mm_per_sec, int pwm_bits):
    pwm_lim_((duty_cycle / 100) * 255),
    max_speed_(mm_per_sec * 60),
    pwm_res_(pow(2, pwm_bits) - 1)

{ 
}

Linac_Kinematics::velocities Linac_Kinematics::getVelocities(float vel_a, float vel_b)
{
    Linac_Kinematics::velocities vel;

    // convert m/s to m/min
    vel.actuator_a = vel_a * 60;
    if (vel.actuator_a > max_speed_) {
        vel.actuator_a = max_speed_;
    }

    // convert m/s to m/min
    vel.actuator_b = vel_b * 60;
    if (vel.actuator_b > max_speed_){
        vel.actuator_b = max_speed_;
    }

    return vel;
}

Linac_Kinematics::velocities Linac_Kinematics::getPWM(float vel_a, float vel_b)
{

    Linac_Kinematics::velocities vel;
    Linac_Kinematics::velocities pwm;

    vel = getVelocities(vel_a, vel_b);

    pwm.actuator_a = VELtoPWM(vel.actuator_a);

    return pwm;
}

int Linac_Kinematics::VELtoPWM(int vel)
{

    return (abs((float) vel / (float) max_speed_) * pwm_res_);

}