#ifndef CONFIG_H
#define CONFIG_H
#include <iostream>
#include <fstream>
class Config
{
    public:
        Config();
        virtual ~Config();
        void init();
        void setNumberOfDoor();
        void setScreenSize();
        void setAirConditionerType();
        void setGearType();

//        void getNumberOfDoor();
//        void getScreenSize();
//        void getAirConditionerType();
//        void getGearType();


    protected:

    private:
        //string line;
};

#endif // CONFIG_H

