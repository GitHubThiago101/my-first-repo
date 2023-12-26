#include <fstream>
#include <iostream>
#include "Config.h"
using namespace std;

int main () {
//    Config con1;
//    con1.setNumberOfDoor();
//    con1.setScreenSize();
//    con1.setAirConditionerType();
//    con1.setGearType();
    streampos begin,end;
    ifstream myfile ("thi.bin", ios::binary);
    begin = myfile.tellg();
    myfile.seekg (0, ios::end);
    end = myfile.tellg();
    myfile.close();
    cout << "size is: " << (end-begin) << " bytes.\n";
//    return 0;


//   char data[100];
//
//   // open a file in write mode.
//   ofstream outfile;
//   outfile.open("afile.dat");
//
//   cout << "Writing to the file" << endl;
//   cout << "Enter your name: ";
//   cin.getline(data, 100);
//
//   // write inputted data into the file.
//   outfile << data << endl;
//
//   cout << "Enter your age: ";
//   cin >> data;
//   cin.ignore();
//
//   // again write inputted data into the file.
//   outfile << data << endl;
//
//   // close the opened file.
//   outfile.close();
//
//   // open a file in read mode.
//   ifstream infile;
//   infile.open("afile.dat");
//
//   cout << "Reading from the file" << endl;
//   infile >> data;
//
//   // write the data at the screen.
//   cout << data << endl;
//
//   // again read the data from the file and display it.
//   infile >> data;
//   cout << data << endl;
//
//   // close the opened file.
//   infile.close();
//
   return 0;
}
