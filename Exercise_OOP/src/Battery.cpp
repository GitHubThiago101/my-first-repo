#include "Battery.h"
#include "Car.h"
#include <iostream>
using namespace std;

//int Battery::energy_ = 0;
Battery* Battery::instancePtr = nullptr;

Battery::Battery()
{
    //ctor
    energy = 0;
}

Battery::~Battery()
{
    //dtor
}

int Battery::getEnergy(int needed)
{
    if (energy >= needed)
    {
        energy -= needed;
        return needed;
    }
    else
    {
        int temp = energy;
        energy = 0;
        return temp;
    }

}

int Battery::currentEnergy()
{
    return energy;
}

void Battery::charge(int percent)
{
    energy += percent;
    if (energy < 1000) cout << "Charged " << energy << " mAh" << endl;
    else
    {
        cout << "Energy is full now!!" << endl;
        energy = 1000;
    }
    //energy_ = energy;
}

Battery* Battery::getInstance()
{
    if(nullptr == instancePtr)
    {
        instancePtr = new Battery();
    }
    return instancePtr;
}
