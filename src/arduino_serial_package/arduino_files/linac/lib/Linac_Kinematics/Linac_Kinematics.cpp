#include "Arduino.h"
#include "Linac_Kinematics.h"

float max_vel = mm_per_sec / 1000;
float pwm_lim = duty_cycle / 100;
int pwm_res = (pow(2, pwm_bits) - 1);

Velocities getVelocities(float lin_a_ex, float lin_a_re, float lin_b_ex, float lin_b_re)
{

    Velocities vel;

    vel.actuator_a = lin_a_ex - lin_a_re; // Make retraction negative and extension positive
    if abs(vel.actuator_a >= 0) { // Make sure that neither extension nor retraction will go above max speed
        vel.actuator_a = max_vel;
    }

    vel.actuator_b = lin_b_ex - lin_b_re;
        if abs(vel.actuator_b >= 0) {
        vel.actuator_b = max_vel;
    }

    return vel;

}

output getPWM(float lin_a_ex, float lin_a_re, float lin_b_ex, float lin_b_re)
{
    output pwm;
    Velocities vel;

    vel = getVelocities(lin_a_ex, lin_a_re, lin_b_ex, lin_b_re);

    pwm.actuator_a = VELtoPWM(vel.actuator_a);
    pwm.actuator_b = VELtoPWM(vel.actuator_b);

    return pwm;
}

int VELtoPWM(float vel)
{

    return ((abs(vel / max_vel) * pwm_res) * pwm_lim);

}