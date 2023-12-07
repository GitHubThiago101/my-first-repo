#include "Light.h"
#include <iostream>
using namespace std;

Light::Light() : battery(new Battery())
{
    //ctor
}

Light::~Light()
{
    //dtor
}

Light::Light(const Light& other)
{
    //copy ctor
}

Light& Light::operator=(const Light& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}


void Light::didTurnLight(StateLight status)
{
    cout << " " << endl;
    cout << "----Control light----" << endl;
    if (status == ::ON)
    {
        cout << "Light is ON" << endl;
        currentenergy = battery->currentEnergy() - 5;
        cout << "The remaining energy " << currentenergy << endl;
    }
    else if (status == ::OFF)
    {
        cout << "Light is OFF" << endl;
    }
    cout << " " << endl;
}
