////============================================================================
//// Name        : Count.cpp
//// Author      : Karima Williams
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Hello World in C++, Ansi-style
////============================================================================
//
//#include <string>
//#include <iostream>
//#include <thread>
//#include <unistd.h>
//using namespace std;
//
//void foo()
//{
//    int i;
//    for (i = 0; i <= 20; i++) {
//    	cout << "Number " << i << endl;
//    	sleep(1);
//    }
//}
//
//void CountUp()
//{
//    int i;
//    while(i <= 20 )
//    {
//        cout << "Number " << i << endl;
//        i++;
//        sleep(1);
//    }
//}
//void CountDown()
//{
//    int countDown = 20;
//    while (countDown  >= 0)
//    {
//        cout << "Number " << countDown  << endl;
//        countDown --;
//        sleep(1);
//    }
//}
//int main()
//{
//    thread th1(foo);
//    thread th2(CountUp);
//    thread th3(CountDown);
//    // Wait for the threads to finish
//    // Wait for thread t1 to finish
//     th1.join();
//
//    // Wait for thread t2 to finish
//    th2.join();
//    th3.join();
//    return 0;
//}
#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;
void foo() { std::cout << "foo()\n"; }
void bar() { std::cout << "bar()\n"; }

class Light
{
public:
    Light()
    {
        //ctor
        currentenergy = 10;
        dem =100;
        status = "ON";
        didTurnLight(status);

    }
    void countdown()
    {
        while (dem >= 0)
        {
            cout << "Count down : " << dem << endl;
            dem--;
            sleep(1);
        }

    }
//     void operator()()
//     {
//        cout << "operator()\n";
//        cout << "Now " << dem << endl;
//        countdown();
////        foo();
////        bar();
//     }
    void operator()()
    {
        cout << "The remaining energy " << dem << " mAh" << endl;
        while (currentenergy <= 100)
        {

            cout << "Energy : " << currentenergy << endl;
            currentenergy++;
            sleep(1);
        }
        //BatteryDown();
    }
void didTurnLight(string status)
{
    cout << " " << endl;
    cout << "----Control light----" << endl;
    if (status == "ON")
    {
        cout << "Light is ON" << endl;
//        currentenergy = battery->currentEnergy() - 5;
//        cout << "The remaining energy " << currentenergy << " mAh" << endl;
        thread th1(*this);
        if (th1.joinable()) th1.join();

    }
    else if (status == "OFF")
    {
        cout << "Light is OFF" << endl;
    }
    cout << " " << endl;
}
 private:
    int dem;
    string status;
    int currentenergy;
};

int main()
{
   Light tsk;
//   std::thread t(tsk);
//   t.join();
   return 0;
}
