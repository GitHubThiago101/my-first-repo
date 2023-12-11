#include "Config.h"
#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

void save(Config obj)
{
    ofstream of("InforCar.dat", ios::binary | ios::app);
    of.write((char*)&obj, sizeof(obj));
    of.close();
}


void load()
{
    ifstream ifs("InforCar.dat", ios::binary);
    Config obj;
    while(ifs.read((char*)&obj, sizeof(obj))) obj.init();
    ifs.close();
}

int main()
{
    Config set1(4, "9ngang", "Auto", "Auto");
    Config set2(3, "9doc", "Manual", "Manual");
   // save(c);
    save(set2);

    load();

    return 0;
}
