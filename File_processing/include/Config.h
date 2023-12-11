#ifndef CONFIG_H
#define CONFIG_H
#include <cstring>
#include <iostream>
using namespace std;

class Config
{
    public:
        int DoorNumber;
        char Screen[50];
        char AirConditioner[50];
        char Gear[50];

        Config();
        Config(int, string, string, string);
        //virtual ~Config();

        void init();
//        friend void save(Config);
//        friend void load();

    protected:

    private:
};

#endif // CONFIG_H
