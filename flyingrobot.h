#ifndef FLYINGROBOT_H
#define FLYINGROBOT_H
#include "robot.h"


class FlyingRobot: public Robot
{
public:
    FlyingRobot();
    void move(int, int, int);

private:
    int numFlyingRobots;
};

#endif // FLYINGROBOT_H
