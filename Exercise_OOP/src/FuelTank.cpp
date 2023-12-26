#include "FuelTank.h"
//#include "Car.h"
//#include "Engine.h"
#include <iostream>
using namespace std;
FuelTank* FuelTank::instancePtr = nullptr;

FuelTank::FuelTank()
{
    //ctor
    fuel = 1000;
}


FuelTank::~FuelTank()
{
    //dtor
}


int FuelTank::getFuel(int needed)
{
    if (fuel > needed)
    {
        fuel -= needed;
        return needed;
    }
    else
    {
        int temp = fuel;
        fuel = 0;
        return temp;
    }
}

int FuelTank::currentFuel()
{
    return fuel;

}

FuelTank* FuelTank::getInstance()
{
    if(nullptr == instancePtr)
    {
        instancePtr = new FuelTank();
    }
    return instancePtr;
}
