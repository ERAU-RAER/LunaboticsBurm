#pragma once

#include "Arduino.h"

float getVelocities(float lin_move);
float getPWM(float lin_move);
float VELtoPWM(float vel);

extern float actuator_n;
extern float vel;
extern int pwm;

extern int duty_cycle; // Define as a while number, i.e. 25% == 25
extern float mm_per_sec; // Define as mm/s, i.e. 15 mm/s == 15
extern int pwm_bits; // Bit resolution of the PWM, i.e. 8 bits == 8