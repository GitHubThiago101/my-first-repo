#include "Configuration.h"
#include <fstream>
#include <iostream>
using namespace std;

Configuration::Configuration()
{
    //ctor
}

Configuration::~Configuration()
{
    //dtor
}
//void Config::setNumberOfDoor()
//{
//    ofstream outfile;
//    outfile.open("thi.bin", ios::app & ios::binary);
//    string line;
//    while (outfile)
//    {
//        cout << "Entered Number of Door : ";
//        getline(cin, line);
//        if (line == "-1") break;
//        outfile << "Number of Door : " << line << endl;
//    }
//}
//
//void Config::setScreenSize()
//{
//    ofstream outfile;
//    outfile.open("thi.bin", ios::app & ios::binary);
//    string line;
//    while (outfile)
//    {
//        cout << "Entered Screen Size : ";
//        getline(cin, line);
//        if (line == "-1") break;
//        outfile << "Screen Size : " << line << endl;
//    }
//    outfile.close();
//}
//
//void Config::setAirConditionerType()
//{
//    ofstream outfile;
//    outfile.open("thi.bin", ios::app & ios::binary);
//    string line;
//    while (outfile)
//    {
//        cout << "Entered Type of Air Conditioner : ";
//        getline(cin, line);
//        if (line == "-1") break;
//        outfile << "Air Conditioner : " << line << endl;
//    }
//}
//void Config::setGearType()
//{
//    ofstream outfile;
//    outfile.open("thi.bin", ios::app & ios::binary);
//    string line;
//    while (outfile)
//    {
//        cout << "Entered Type of Gear : ";
//        getline(cin, line);
//        if (line == "-1") break;
//        outfile << "Gear Type : " << line << endl;
//    }
//}
