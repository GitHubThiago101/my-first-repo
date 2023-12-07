#ifndef ENGINE_H
#define ENGINE_H
#include "Controller.h"
#include "FuelTank.h"
#include "Battery.h"


class CarEngineDelegate{
public:
    virtual void runThisCar(Gear, int) = 0;

};

class Car;
class Engine : public EngineControllerDelegate{
public:
    Engine();
    virtual ~Engine();
    Engine(const Engine& other);
    Engine& operator=(const Engine& other);
    void setDelegate(CarEngineDelegate&);
    void didChangeGear(Gear) override;
    void didStepOnAccelerator(int) override;


protected:

private:
    CarEngineDelegate *delegateCar;
    FuelTank* fueltank;
    Battery* battery;

    string stateGear;
    Gear currentG;
};

#endif // ENGINE_H
