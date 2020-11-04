#include "Motor.h"
bool testAngle(double angleTest)
{

    double angle = readAngle();
    if (angle < angleTest)
    {
        enableMotor(true);
        breakMotor(false);
        turnMotor(200, 0);
        return false;
    }
    else
    {
        enableMotor(false);
        breakMotor(true);
        return true;
    }
}

bool testTurnClockWise(double angleTest, double speedTest)
{

    double angle = readAngle();
    if (angle > angleTest)
    {
        enableMotor(true);
        breakMotor(false);
        turnMotor(speedTest, 1);
        return false;
    }
    else
    {
        enableMotor(false);
        breakMotor(true);
        return true;
    }
}
bool testTurnCounterClockWise(double angleTest, double speedTest)
{
    double angle = readAngle();
    if (angle < angleTest)
    {
        enableMotor(true);
        breakMotor(false);
        turnMotor(speedTest, 0);
        return false;
    }
    else
    {

        enableMotor(false);
        breakMotor(true);
        return true;
    }
}
void testTurnTwoDirections(double angleTest, double speedTest)
{
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
void testIncrementSpeed()
{
    Serial.println(" incrementing speed counter clockwise ");
    for (float i = 100; i < 1000; i += 10)
    {
        turnMotor(i, 0);
        delay(100);
    }
    Serial.println(" decrementing speed counter clockwise ");
    for (float i = 1000; i > 100; i -= 10)
    {
        turnMotor(i, 0);
        delay(100);
    }

    stopMotor();
    delay(2000);
}

void serialFlush(){
  while(Serial.available() > 0) {
    Serial.read();
  }
} 
void generalTest()
{
    serialFlush();

    Serial.println("Testing motor");
    Serial.println(" press enter to start 1st test: speed changes");
    while(!Serial.available());
    serialFlush();
    //testIncrementSpeed();

    Serial.println(" press enter to start 2nd test: turn by 180 degrees counter clockwise  ");
    while(!Serial.available());
    serialFlush();
    bool test2ended = false;
    int angle = readAngle() + 180;
    while (!test2ended)
    {
        test2ended = testAngle(angle);
    }

    Serial.println(" press enter to start 3nd test: testing direction");
    while(!Serial.available());
    serialFlush();
    Serial.println(" turning counter clockwise by 180 degrees");
    bool test3ended = false;
    angle = readAngle() + 180;
    while (!test3ended)
    {
        test3ended = testTurnCounterClockWise(angle, 100);
    }

    Serial.println(" turning clockwise by 90 degrees");
    while(!Serial.available());
    serialFlush();

    bool test4ended = false;
    angle = readAngle() - 90;
    while (!test4ended)
    {
        test4ended = testTurnClockWise(angle, 100);
    }
    Serial.println("tests ended");
}