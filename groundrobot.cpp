#include "groundrobot.h"

GroundRobot::GroundRobot(){numGroundRobots++;}

GroundRobot::move(int dx, int dy){
    x += dx;
    y += dy;
}

