#include "robot.h"
#include <iostream>
using namespace std;

Robot::Robot(){}

void Robot::move(){

}

void Robot::setPower(bool pwr){
    power = pwr;
}

void Robot::selfDestruct(){
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
        return false;
}

Robot::~Robot(){}
