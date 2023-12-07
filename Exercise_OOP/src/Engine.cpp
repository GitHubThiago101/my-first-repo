#include "Engine.h"
#include "Controller.h"
#include "Car.h"
#include <iostream>
#include <string>
#include "FuelTank.h"
using namespace std;

Engine::Engine() : fueltank(new FuelTank()), battery(new Battery())
{
    //ctor
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
//    getInforGear = currentG;

}

void Engine::didStepOnAccelerator(int percent){
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
        }
        else if (currentG == ::R)
        {
            stateGear = "Go back ";
            cout << stateGear << percent << " m" << endl;
        }
        else if (currentG == ::L1)
        {
            stateGear = "Go L1 mode, ";
            cout << stateGear << percent << " m" << endl;
        }
        else if (currentG == ::L2)
        {
            stateGear = "Go L2 mode, ";
            cout << stateGear << percent << " m" << endl;
        }
        else cout << "ERROR";
    }
    else cout << "ERROR";

    int currentBattery = battery->currentEnergy();
    cout << "Initial energy : " << currentBattery << endl;
    int currentFuel = fueltank->currentFuel();
    cout << "Initial fuel : " << currentFuel << endl;

    if (fueltank->calculateFuel(currentG, percent) == 1)
    {
        //cout << "Car is running ..." << endl;
        delegateCar->runThisCar(currentG, percent);
        battery->charge(percent);
        cout << "The remaining of fuel :" << fueltank->remain << endl;
    }
    else
    {
        battery->charge(fueltank->useReal);
        cout << "Can not run enough!!!" << endl;
    }



    //if (currentFuel == fueltank->calculateFuel(currentG, percent))
    //cout << "Added " << fueltank->getFuel(400) << " ml fuel" << endl;

    //fueltank->currentFuel();


}

