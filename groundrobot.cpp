#include "groundrobot.h"

GroundRobot::GroundRobot(){numGroundRobots++;}

void GroundRobot::move(int dx, int dy){
    x += dx;
    y += dy;
    z = 0;
}

void GroundRobot::plantMine(){
    env[x][y] = 1;
    cout << "Mine planted at (" << x << "," << y << ")!" << endl;
}


GroundRobot::~GroundRobot(){}
