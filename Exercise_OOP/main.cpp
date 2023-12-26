#include <iostream>
#include "Engine.h"
#include "Controller.h"
#include "Car.h"
#include "FuelTank.h"
#include "Battery.h"
#include "HMI.h"
#include <unistd.h>
#include <thread>
using namespace std;

int main(){
    Car car1;

    Controller *car1Control = car1.getController();

    car1Control->changeGear(::D);
    car1Control->stepOnAccelerator(30);
    car1Control->turnLight(::ON);

//    car1Control->changeGear(::L1);
//    car1Control->stepOnAccelerator(50);
//    car1Control->turnLight(::OFF);
    return 0;
}

