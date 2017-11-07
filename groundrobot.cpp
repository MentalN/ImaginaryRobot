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

void GroundRobot::plantSuperMine(){
    for(i = x-1; i < x+1; i++){
        for(j = y-1; j < j+1; j++){
            env[i][j]=1;
        }
    }
    cout << "Super mine planted at " << x << "," << y << ")!" << endl;
}


GroundRobot::~GroundRobot(){numGroundRobots--;}
