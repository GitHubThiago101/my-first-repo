//#include <iostream>
//#include <math.h>
//using namespace std;
//
//void increase(int a[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n - 1; j++)
//        {
//            if (a[i] < a[j])
//            {
//                int temp = a[i];
//                a[i] = a[j];
//                a[j] = temp;
//            }
//        }
//    }
//}
//
//int snt(int a)
//{
//    int count = 0;
//    if (a < 2) return 0;
//    for (int i = 2; i <= sqrt(a); i++)
//    {
//        if (a%i == 0) count++;
//    }
//    if (count == 0) return 1;
//    else return 0;
//
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    increase(a, n);
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] != a[i+1])
//            if (snt(a[i]) != 0) cout << a[i] << " ";
//    }
//    return 0;
//}
