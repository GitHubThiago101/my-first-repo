#include "Car.h"
#include <iostream>
using namespace std;

int Car::counter = 0;
//Car::printCount = 0;

Car::Car() : controller(new Controller()), hmi(new HMI())
{
    //ctor
    battery = Battery::getInstance();
    fueltank = FuelTank::getInstance();
    controller->setDelegate(engine);
    engine.setDelegate(*this);
    controller->setDelegateLight(light);
    ++counter;
}

Car::~Car()
{
    //dtor
    delete fueltank;
    delete battery;
    delete controller;
}

void Car::printCount(void)
{
    cout << "count:" << counter << "\n";
}

void Car::runThisCar(int distance, Gear gear)
{
    cout << " " << endl;
    cout << "----Controller sent signal to car----" << endl;
    battery->charge(distance);
    int energy = battery->currentEnergy();
    int fuel = fueltank->currentFuel();
    hmi->showInfor(fuel, energy, gear);
}

Controller* Car::getController(){
    return controller;
}

