#include "FuelTank.h"
//#include "Car.h"
#include "Engine.h"
#include <iostream>
using namespace std;

FuelTank::FuelTank()
{
    //ctor
    fuel = 1000;
//    cout << "Khoi tao gia tri ban dau cho Fuel : " << fuel << endl;
//    cout << " " << endl;
}

//FuelTank::FuelTank(int fuel_)
//{
//    //ctor
//    fuel = fuel_;
//    cout << "Khoi tao gia tri ban dau cho Fuel : " << fuel << endl;
//    cout << " " << endl;
//}

FuelTank::~FuelTank()
{
    //dtor
}

//void FuelTank::setFuel(int setF)
//{
//    if (setF > 75000 && setF < 0) cout << "Error" << endl;
//    else fuel = setF;
//}

int FuelTank::getFuel(int needed)
{
    fuel += needed;
    if (needed > 75000 && needed < 0) return fuel;
    else {
        cout << "Full already!!" << endl;
        return -1;
    }
}

int FuelTank::currentFuel()
{
    return fuel;

}

int FuelTank::calculateFuel(Gear gear, int percent)
{
        //cout << "Existing fuel : " << fuel << endl;
    Gear currentgear = gear;
    int currentpercent = percent;

    if (currentgear == ::D)
    {
        if (fuel >= currentpercent * 10)
        {
            cout << "Enough to go!!" << endl;
            fuel = fuel - currentpercent * 10;
            remain = fuel;
            return 1;

        }
        else
        {
            cout << "Lack of fuel " << currentpercent * 10 - fuel << " to get the target" << endl;
            cout << "Just can go " << fuel/10 << " m" << endl;
            useReal = fuel/10;
            return 0;
        }
    }
    else if (currentgear == ::L2)
    {
        if (fuel >= currentpercent * 20)
        {
            {
                cout << "Enough to go!!" << endl;
                fuel = fuel - currentpercent * 20;
                remain = fuel;
                return 1;
            }
        }
        else
        {
            cout << "Lack of fuel " << currentpercent * 20 - fuel << " to get the target" << endl;
            cout << "Just can go " << fuel/20 << " m" << endl;
            useReal = fuel/20;
            return 0;

        }
    }
    else if (currentgear == ::L1 || currentgear == ::R)
    {
        if (fuel >= currentpercent * 30)
        {
            {
                cout << "Enough to go!!" << endl;
                fuel = fuel - currentpercent * 30;
                remain = fuel;
                return 1;
            }
        }
        else
        {
            cout << "Lack of fuel " << currentpercent * 30 - fuel << " to get the target" << endl;
            cout << "Just can go " << fuel/30 << " m" << endl;
            useReal = fuel/30;
            return 0;

        }
    }
    else cout << "Error" << endl;
    return 0;

//    car.getInforFuel = fuel;
//    cout << "Fuel: " << fuel << endl;
}
