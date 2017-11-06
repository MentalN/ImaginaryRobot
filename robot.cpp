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

