#include "Arduino.h"
#include "Linac_Kinematics.h"

float max_vel = mm_per_sec / 1000;
float pwm_lim = duty_cycle / 100;
int pwm_res = (pow(2, pwm_bits) - 1);
float actuator_n = 0;
float vel = 0;
int pwm = 0;

float getVelocities(float lin_move)
{

    // actuator_n = lin_move; // Make retraction negative and extension positive
    if (lin_move >= 0 && abs(lin_move > max_vel)) { // Make sure that neither extension nor retraction will go above max speed
        actuator_n = max_vel;
    } else if (lin_move < 0 && abs(lin_move > max_vel)) {
        actuator_n = -max_vel;
    } else {
        actuator_n = lin_move;
    }

    return actuator_n;
    Serial.println(actuator_n);

}

float getPWM(float lin_move)
{

    vel = getVelocities(lin_move);

    pwm = VELtoPWM(vel);

    return pwm;
    Serial.println(pwm);
}

float VELtoPWM(float vel)
{

    return ((abs(vel / max_vel) * pwm_res) * pwm_lim);
    Serial.println(((abs(vel / max_vel) * pwm_res) * pwm_lim));

}