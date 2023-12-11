#include "Config.h"
#include "cstring"
#include "fstream"
using namespace std;
Config::Config()
{
    //ctor
}

Config::Config(int _DoorNumber, string _Screen, string _AirConditioner, string _Gear)
{
    DoorNumber = _DoorNumber;
    strcpy(Screen, _Screen.c_str());
    strcpy(AirConditioner, _AirConditioner.c_str());
    strcpy(Gear, _Gear.c_str());
}

//Config::~Config()
//{
//    //dtor
//}

void Config::init()
{
    cout << "Number of Door : " << DoorNumber << "\t\tScreen Size : " << Screen << "\t\tAir Conditioner Type : " << AirConditioner << "\t\tGear Type : " << Gear << endl;
}

//void save(Config obj)
//{
//    ofstream of("InforCar.dat", ios::binary | ios::app);
//    of.write((char*)&obj, sizeof(obj));
//    of.close();
//}

//void load()
//{
//    ifstream ifs("InforCar.dat", ios::binary);
//    Config obj;
//    while(ifs.read((char*)&obj, sizeof(obj)))
//    {
//        obj.init();
//    }
//    ifs.close();
//}


