#ifndef BATTERY_H
#define BATTERY_H
//#include "Car.h"
#include <iostream>
using namespace std;

class Battery
{
public:
    //static int energy_;
    Battery();
    ~Battery();

    int getEnergy(int);
    void charge(int);
    int currentEnergy();
    static Battery* getInstance();

private:
    static Battery* instancePtr;
    int energy;
};

#endif // BATTERY_H
