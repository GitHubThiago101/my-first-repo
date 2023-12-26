#ifndef CONFIG_H
#define CONFIG_H
#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

//enum Door
//{
//    TwoDoor, //0
//    ThreeDoor, //1
//    FourDoor
//};
//
//enum Screen
//{
//    Nine_inch_horizontal,
//    Nine_inch_vertical,
//    Eleven_inch_horizontal,
//    Eleven_inch_vertical,
//    Fifteen_inch_horizontal
//};


class Config
{
    public:
        int DoorNumber;
        char Screen[15];
        char AirConditioner[7];
        char Gear[6];

        Config();
        Config(int, string, string, string);

        void init();
        void save(ofstream& of);
        void load(ifstream& ifs);

    protected:

    private:
        uint8_t sum;
};

#endif // CONFIG_H
