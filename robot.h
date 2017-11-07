#ifndef ROBOT_H
#define ROBOT_H


class Robot
{
public:
    Robot();
    void setPower(bool);
    virtual void move();
    void selfDestruct();
    bool operator==(const Robot&);

protected:
    int numRobots;
    bool power;
    int x, y;
    unsigned int z;


};

#endif // ROBOT_H
