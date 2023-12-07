#ifndef CAR_H
#define CAR_H
#include "Controller.h"
#include "Engine.h"
#include "FuelTank.h"
#include "Light.h"
#include <iostream>
using namespace std;

class Car : public CarEngineDelegate
{
public:
    static int counter;
//    int getInforPercent;
//    int getInforPercentChanged;
//    Gear getInforGear;
//    int getInforFuel;
//    int getInforBattery;

        Car();
    int thi = 0;
    Controller* getController();

    virtual ~Car();
    Car(const Car& other);
    Car& operator=(const Car& other);

    void printCount(void);
    void runThisCar(Gear, int) override;

protected:
//        int percent;
//        Gear gear;

private:
    Engine engine;
//    HMI *hmi;
//    Battery battery;
    //FuelTank fueltank;
    Light light;
    Controller* controller;
};
#endif // CAR_H






