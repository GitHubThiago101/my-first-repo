#include "Car.h"
#include "Engine.h"
#include "Controller.h"
#include "FuelTank.h"
#include "Light.h"
#include <iostream>
using namespace std;

int Car::counter = 0;

Car::Car()
{
    //ctor
    controller = new Controller();
    controller->setDelegate(engine);
    engine.setDelegate(*this);
    controller->setDelegateLight(light);
    //FuelTank fueltank();
//    engine.currentFuel();

    ++counter;
}

Car::~Car()
{
    //dtor
    --counter;
}

Car::Car(const Car& other)
{
    //copy ctor
}

Car& Car::operator=(const Car& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

void Car::printCount(void)
{
    cout << "count:" << counter << "\n";
}


void Car::runThisCar(Gear g, int per)
{
    cout << " " << endl;
    cout << "----Controller sent signal to car----" << endl;
    cout << "Let run: with current Gear " << g << ", and " << per << " m" << endl;
}


//void Car::getController(Car& car, Gear g, int per){
//
////    cout << "Gear type : " << gear << endl;
//
//    getInforGear = g;
//    getInforPercent = per;
//    Engine engine;
//    engine.setDelegate(car);
//    controller->setDelegate(engine);
//    controller->changeGear(g);
//    controller->stepOnAccelerator(per);
//
//}

Controller* Car::getController(){
    return controller;
}

