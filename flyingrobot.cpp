#include "flyingrobot.h"

FlyingRobot::FlyingRobot(){numFlyingRobots++;}

void FlyingRobot::move(int dx, int dy, int dz){
    x += dx;
    y += dy;
    z += dz;
}

FlyingRobot::~FlyingRobot(){}
