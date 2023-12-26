#include "Light.h"
#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;

Light::Light()
{
    //ctor
    battery = Battery::getInstance();

}

Light::~Light()
{
    //dtor
}

void Light::operator()()
{
    while (currentenergy >= 0)
    {

        cout << "Energy : " << currentenergy << endl;
        currentenergy--;
        sleep(1);
    }
    cout << "Light is OFF" << endl;
}

void Light::didTurnLight(StateLight status)
{
    cout << " " << endl;
    cout << "----Control light----" << endl;
    //int temp = battery->energy_;
    int temp = battery->getEnergy(5);
    if (status == ::ON && temp >= 5)
    {
        cout << "Light is ON" << endl;
        currentenergy = battery->currentEnergy();
        cout << "The remaining energy " << currentenergy << " mAh" << endl;
        thread th1(*this);
        if (th1.joinable()) th1.join();

    }
    else if (status == ::OFF)
    {
        cout << "Light is OFF" << endl;
    }
    else
    {
        cout << "Not enough energy to turn the light ON!!" << endl;
        cout << "The remaining of energy : " << temp << endl;
        //battery->energy_ = 0;
    }

    cout << " " << endl;
}
