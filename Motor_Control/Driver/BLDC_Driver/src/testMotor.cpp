#include "Motor.h"
void testAngle(double angleTest)
{

    double angle = readAngle();
    if (angle < angleTest)
    {
        enableMotor(true);
        breakMotor(false);
        turnMotor(70, 0);
        Serial.println(angle);
    }
    else
    {
        enableMotor(false);
        breakMotor(true);
    }
}

void 