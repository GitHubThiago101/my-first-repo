#include "Battery.h"
#include "Car.h"
#include <iostream>
using namespace std;

Battery::Battery()
{
    //ctor
    energy = 150;
}

Battery::~Battery()
{
    //dtor
}

int Battery::getEnergy(int needed)
{
    energy += needed;
    if (energy > 1000 && energy < 0) return energy;
    else {
        cout << "Full already!!" << endl;
        return -1;
    }
}

int Battery::currentEnergy()
{
    return energy;
}

void Battery::charge(int percent)
{
//       Gear currentgear = car.gear;
//    int currentpercent;
//    if (car.getInforPercent == car.getInforPercentChanged)
//    {
//        currentpercent = car.getInforPercent;
//    }
//    else currentpercent = car.getInforPercentChanged;
    energy += percent;
    cout << "Charged " << energy << " mAh" << endl;
//    cout << "Energy charged : " << energy << endl;
//    car.getInforBattery = energy;
//    getInforEnergy = energy;
}
