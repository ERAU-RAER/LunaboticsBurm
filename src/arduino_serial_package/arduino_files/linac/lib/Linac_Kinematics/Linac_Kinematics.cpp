#include "Arduino.h"
#include "Linac_Kinematics.h"

float max_vel = mm_per_sec / 1000;
float pwm_lim = duty_cycle / 100;
int pwm_res = (pow(2, pwm_bits) - 1);

Velocities getVelocities(float lin_move)
{

    Velocities vel;

    vel.actuator_n = lin_move; // Make retraction negative and extension positive
    if (vel.actuator_n >= 0 && abs(vel.actuator_n >= max_vel)) { // Make sure that neither extension nor retraction will go above max speed
        vel.actuator_n = max_vel;
    } else if (vel.actuator_n < 0 && abs(vel.actuator_n >= max_vel)) {
        vel.actuator_n = -max_vel;
    }

    return vel;

}

output getPWM(float lin_move)
{
    output pwm;
    Velocities vel;

    vel = getVelocities(lin_move);

    pwm.actuator_n = VELtoPWM(vel.actuator_n);

    return pwm;
}

int VELtoPWM(float vel)
{

    return ((abs(vel / max_vel) * pwm_res) * pwm_lim);

}