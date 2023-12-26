#include "Config.h"
#include <fstream>
#include <iostream>
using namespace std;

Config::Config()
{
    //ctor
}

Config::~Config()
{
    //dtor
}

void Config::init()
{
}

void Config::setNumberOfDoor()
{
    ofstream outfile;
    outfile.open("thi.bin", ios::app | ios::binary);
    string line;
    while (outfile)
    {
        cout << "Enter Number of Door : ";
        getline(cin, line);
        if (line == "-1") break;
//        outfile.write(&line, )
        outfile << "Number of Door : " << line << endl;
    }
    outfile.close();
}

void Config::setScreenSize()
{
    ofstream outfile;
    outfile.open("thi.bin", ios::app | ios::binary);
    string line;
    while (outfile)
    {
        cout << "Enter Screen Size : ";
        getline(cin, line);
        if (line == "-1") break;
        outfile << "Screen Size : " << line << endl;
    }
    outfile.close();
}

void Config::setAirConditionerType()
{
    ofstream outfile;
    outfile.open("thi.bin", ios::app | ios::binary);
    string line;
    while (outfile)
    {
        cout << "Enter Type of Air Conditioner : ";
        getline(cin, line);
        if (line == "-1") break;
        outfile << "Air Conditioner : " << line << endl;
    }
    outfile.close();
}
void Config::setGearType()
{
    ofstream outfile;
    outfile.open("thi.bin", ios::app | ios::binary);
    string line;
    while (outfile)
    {
        cout << "Enter Type of Gear : ";
        getline(cin, line);
        if (line == "-1") break;
        outfile << "Gear Type : " << line << endl;
    }
    outfile.close();
}
