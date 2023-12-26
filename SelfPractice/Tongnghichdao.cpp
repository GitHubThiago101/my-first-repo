//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t > 0)
//    {
//        int n;
//        cin >> n;
//        double s = 0;
//        if (n < 0) return 0;
//        for (int i = 1; i <= n; i++)
//        {
//            s += static_cast<float>(1)/i;
//        }
//        cout << fixed << setprecision(5) << s << endl;
//        t--;
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <iomanip>
//#include <vector>
//using namespace std;
//
//vector<long double> a(1000001);
//
//void sinh()
//{
//    a[0] = 0.00000;
//    for (long long i = 1; i <= 1000000; i++)
//    {
//        a[i] = a[i - 1] + (double)1 / i;
//    }
//}
//
//int main()
//{
////    ios_base::sync_with_stdio(false);
////    cin.tie(0);
////    cout.tie(0);
//    sinh();
//    long long n;
//    cin >> n;
//    while (n--)
//    {
//        long long b;
//        cin >> b;
//        cout << setprecision(5) << fixed << a[b] << "\n";
//    }
//    return 0;
//}
