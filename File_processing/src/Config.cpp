#include "Config.h"
#include "cstring"
#include "fstream"
using namespace std;
Config::Config()
{
    //ctor
    sum = 0;
}

Config::Config(int _DoorNumber, string _Screen, string _AirConditioner, string _Gear)
{
    DoorNumber = _DoorNumber;
    strcpy(Screen, _Screen.c_str());
    strcpy(AirConditioner, _AirConditioner.c_str());
    strcpy(Gear, _Gear.c_str());
}

void Config::init()
{
    cout << "Number of Door : " << DoorNumber << "\t\tScreen Size : " << Screen << "\t\tAir Conditioner Type : " << AirConditioner << "\t\tGear Type : " << Gear << endl;
}

void Config::save(ofstream& of)
{
    of.write((char*)&DoorNumber, sizeof(DoorNumber));
    of.write(Screen, sizeof(Screen));
    of.write(AirConditioner, sizeof(AirConditioner));
    of.write(Gear, sizeof(Gear));
}

void Config::load(ifstream& ifs)
{
    ifs.read((char*)&DoorNumber, sizeof(DoorNumber));
    ifs.read(Screen, sizeof(Screen));
    ifs.read(AirConditioner, sizeof(AirConditioner));
    ifs.read(Gear, sizeof(Gear));
   // cout << "Number of Door : " << DoorNumber << "\t\tScreen Size : " << Screen << "\t\tAir Conditioner Type : " << AirConditioner << "\t\tGear Type : " << Gear << endl;

}


