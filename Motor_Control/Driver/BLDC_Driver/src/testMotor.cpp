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

void testTurnClockWise(double angleTest, double speedTest){

    double angle = readAngle();
    if (angle < angleTest)
    {
        enableMotor(true);
        breakMotor(false);
        turnMotor(speedTest, 1);
        Serial.println(angle);
    }
    else
    {
        enableMotor(false);
        breakMotor(true);
    }
}
void testTurnCounterClockWise(double angleTest, double speedTest){
    double angle = readAngle();
    if (angle < angleTest)
    {
        enableMotor(true);
        breakMotor(false);
        turnMotor(speedTest, 0);
        Serial.println(angle);
    }
    else
    {
        enableMotor(false);
        breakMotor(true);
    }
}
void testTurnTwoDirections(double angleTest, double speedTest){
    double angle = readAngle();
    if (angle < angleTest)
    {
        enableMotor(true);
        breakMotor(false);
        turnMotor(speedTest, 0);
        Serial.println(angle);
    }
    else
    {
        turnMotor(speedTest, 1);
        Serial.println(angle);
    }
}
