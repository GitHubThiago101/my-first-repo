//#include "Config.h"
//#include <fstream>
//#include <iostream>
//#include <cstring>
//using namespace std;
//
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
//
//enum AirConditioner
//{
//    Auto,
//    Manual
//};
//
//enum Gear
//{
//    AutoGear,
//    ManualGear,
//    Mixed
//};
//
//int main()
//{
////    uint8_t sum = 0;
////    Gear gear(1);
////    cout << Gear(1) << endl;
////    sum = sum|Gear(1);
////    Screen s;
////    cout << s << endl;
//
//
//
//  //cout << ::TwoDoor << endl;
////    Config con1(2, "9 inch ngang", "Auto", "Auto");
////    Config con2(3, "9 inch doc", "Manual", "Manual");
////    Config con3(4, "11 inch ngang","Auto", "Mixed");
////    Config con4(4, "11 inch doc", "Manual", "Auto");
////    ofstream of("InforCar.dat", ios::binary | ios::out);
////    con1.save(of);
////    con2.save(of);
////    con3.save(of);
////    con4.save(of);
////    of.close();
////
////    ifstream ifs("InforCar.dat", ios::binary | ios::in);
////    Config config1;
////    Config config2;
////    Config config3;
////    Config config4;
////    config1.load(ifs);
////    config2.load(ifs);
////    config3.load(ifs);
////    config4.load(ifs);
////    ifs.close();
////    config1.init();
////    config2.init();
////    config3.init();
////    config4.init();
//
//    return 0;
//}
////#include <bitset>
////#include <iostream>
////
////int main()
////{
////    std::bitset<8> b{1};
////    std::cout << b.to_string() << '\n'
////              << b.to_string('*') << '\n'
////              << b.to_string('O', 'X') << '\n';
////}
#include <iostream>

enum class Esper { Unu, Du, Tri, Kvar, Kvin, Ses, Sep, Ok, Naux, Dek };

constexpr const char* EsperToString(Esper e) throw()
{
    switch (e)
    {
        case Esper::Unu: return "Unu";
        case Esper::Du: return "Du";
        case Esper::Tri: return "Tri";
        case Esper::Kvar: return "Kvar";
        case Esper::Kvin: return "Kvin";
        case Esper::Ses: return "Ses";
        case Esper::Sep: return "Sep";
        case Esper::Ok: return "Ok";
        case Esper::Naux: return "Naux";
        case Esper::Dek: return "Dek";
        default: throw std::invalid_argument("Unimplemented item");
    }
}

int main()
{
    std::cout << EsperToString(Esper::Kvin) << std::endl;
}
