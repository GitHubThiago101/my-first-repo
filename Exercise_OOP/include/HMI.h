#ifndef HMI_H
#define HMI_H
#include <iostream>
#include "Car.h"
#include "FuelTank.h"
#include "Battery.h"
using namespace std;

class HMI
{
public:
    HMI();
    ~HMI();
    Gear gear;
    int fuel;
    int battery;
    void showInfor();
};

#endif // HMI_H
