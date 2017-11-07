#include "robot.h"
#include <iostream>

Robot::Robot(){}

Robot::setPower(bool pwr){
    power = pwr;
}

Robot::selfDestruct(){
    numRobots--;
    cout << "Robot destroyed!" << endl;
    cout << "Number of robots: " << numRobots << endl;
    delete this;
}

bool Robot::operator ==(const Robot& bot){
    if(this->x == bot.x &&
       this->y == bot.y &&
       this->z == bot.z)
        return true;
    else
        return false
}
