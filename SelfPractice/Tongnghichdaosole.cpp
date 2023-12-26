//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//double *a = new double[10000001]; //10.000.001
//
//void go()
//{
//    double sum = 0;
//    for (int i = 1; i <= 10000000; i+=2) //10.000.000
//    {
//        sum += static_cast<double>(1)/i;
//        a[i] = sum;
//    }
//}
//
//int main()
//{
//    int t;
//    cin >> t;
//    go();
//    while (t--)
//    {
//        int n;
//        cin >> n;
//        cout << fixed << setprecision(5) << a[2*n-1] << endl;
//    }
//    return 0;
//}
