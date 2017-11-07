#include "groundrobot.h"

GroundRobot::GroundRobot(){numGroundRobots++;}

void GroundRobot::move(int dx, int dy){
    x += dx;
    y += dy;
    z = 0;
}

