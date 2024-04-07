#pragma once

#include "Arduino.h"

struct Twist
{
    float linear_x;
    float linear_y;
    float linear_z;
    float angular_x;
    float angular_y;
    float angular_z;
};

extern Twist previousTwist;

void sanityCheck(const Twist &twist);

Twist parseTwist(const String &msg);