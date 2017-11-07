#include "flyingrobot.h"

FlyingRobot::FlyingRobot(){numFlyingRobots++;}

FlyingRobot::move(int dx, int dy, int dz){
    x += dx;
    y += dy;
    z += dz;
}
