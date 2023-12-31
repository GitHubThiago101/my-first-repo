#ifndef ENGINE_H
#define ENGINE_H
#include "Controller.h"
#include "FuelTank.h"

class CarEngineDelegate{
public:
    virtual void runThisCar(int, Gear) = 0;

};


class Engine : public EngineControllerDelegate{
public:
    Engine();
    virtual ~Engine();
    Engine(const Engine& other);
    Engine& operator=(const Engine& other);
    void setDelegate(CarEngineDelegate&);
    void didChangeGear(Gear) override;
    void didStepOnAccelerator(int) override;
    int calcFuel(int, int, int);
protected:

private:
    CarEngineDelegate *delegateCar;
    FuelTank *fueltank;
    string stateGear;
    Gear currentG;
    int fuel;
    int distance;
};

#endif // ENGINE_H
