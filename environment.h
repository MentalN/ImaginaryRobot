#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H
#include "groundrobot.h"


class Environment
{

public:
    Environment();

private:
    int env[100][100] = {{0}};

    friend void GroundRobot::plantMine();
};

#endif // ENVIRONMENT_H
