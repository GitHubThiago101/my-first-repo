#include "Engine.h"
#include "Controller.h"
#include "Car.h"
#include <iostream>
#include <string>
#include "FuelTank.h"
using namespace std;

Engine::Engine()
{
    //ctor
    fueltank = FuelTank::getInstance();
}

Engine::~Engine()
{
    //dtor
}

Engine::Engine(const Engine& other)
{
    //copy ctor
}

Engine& Engine::operator=(const Engine& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

void Engine::setDelegate(CarEngineDelegate& del){
    delegateCar = &del;
}

void Engine::didChangeGear(Gear g){
    currentG = g;
    cout << "currentG : " << currentG << endl;

}

void Engine::didStepOnAccelerator(int percent){

    int fuel = fueltank->currentFuel();
    int distance = 0;
    if (percent >= 1 && percent <=100)
    {
        if (currentG == ::N)
        {
            stateGear = "Stop";
            cout << stateGear << endl;
        }
        else if (currentG == ::D)
        {
            stateGear = "Go forward ";
            cout << stateGear << percent << " m" << endl;
            distance = calcFuel(10, fuel, percent);
        }
        else if (currentG == ::R)
        {
            stateGear = "Go back ";
            cout << stateGear << percent << " m" << endl;
            distance = calcFuel(30, fuel, percent);
        }
        else if (currentG == ::L1)
        {
            stateGear = "Go L1 mode, ";
            cout << stateGear << percent << " m" << endl;
            distance = calcFuel(30, fuel, percent);
        }
        else if (currentG == ::L2)
        {
            stateGear = "Go L2 mode, ";
            cout << stateGear << percent << " m" << endl;
            distance = calcFuel(20, fuel, percent);
        }
        else cout << "ERROR";
    }
    else cout << "ERROR";
    delegateCar->runThisCar(distance, currentG);

}

int Engine::calcFuel(int m, int fuel, int percent)
{
    if (fuel >= percent * m)
    {
        cout << "Enough to go!!" << endl;
        fuel = fueltank->currentFuel() - fueltank->getFuel(percent * m);
        distance = percent;
        cout << "The remaining of fuel : " << fuel << endl;
    }
    else
    {
        cout << "Lack of fuel " << percent * m - fuel << " to get the target" << endl;
        cout << "Just can go " << fuel/m << " m" << endl;
        distance = fuel/m;
        cout << "Can not run enough!!!" << endl;
        fuel = 0;
    }
    return distance;
}
