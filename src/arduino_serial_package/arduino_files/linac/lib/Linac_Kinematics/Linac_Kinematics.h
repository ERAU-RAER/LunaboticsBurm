#pragma once

#include "Arduino.h"

struct Velocities
{
    float actuator_n;
};
struct output
{
    float actuator_n;
};

Velocities getVelocities(float lin_move);
output getPWM(float lin_move);
int VELtoPWM(float vel);

extern int duty_cycle; // Define as a while number, i.e. 25% == 25
extern float mm_per_sec; // Define as mm/s, i.e. 15 mm/s == 15
extern int pwm_bits; // Bit resolution of the PWM, i.e. 8 bits == 8