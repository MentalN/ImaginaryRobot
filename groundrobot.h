#ifndef GROUNDROBOT_H
#define GROUNDROBOT_H
#include "robot.h"


class GroundRobot: public Robot
{
public:
    GroundRobot();
    void move(int, int);
    void plantMine();
    ~GroundRobot();

private:
    int numGroundRobots;

};

#endif // GROUNDROBOT_H
