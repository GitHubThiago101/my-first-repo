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
////void perfect(int a[], int n)
////{
////    long max = 0;
////    long max2 = 0;
////    long mul = 1;
////    long mul2 = 1;
////    int index1 = 0;
////    int index2 = 0;
////    for (int i = 0; i < n; i++)
////    {
////        for (int j = 0; j < n - 1; j++)
////        {
////            if (j != i)
////            {
////                mul = a[i] * a[j];
////                if (mul >= max)
////                {
////                    max = mul;
////                    index1 = i;
////                    index2 = j;
////                }
////            }
////        }
////    }
////    for (int i = 0; i < n; i++)
////    {
////        if (i != index1 && i != index2)
////        {
////            mul2 = a[i] * max;
////            if (mul2 >= max2) max2 = mul2;
////        }
////    }
////    cout << max2;
////}
//
//int main()
//{
//    int n;
//    long max;
//    long mul = 1;
//    long mul2 = 1;
//    cin >> n;
//    if (n < 3 || n > 10000) return 0;
//    int a[n];
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//        if (a[i] > 1000 || a[i] < -1000) return 0;
//    }
//    increase(a, n);
////    for (int i = 0; i < n; i++)
////    {
////        cout << a[i] << " ";
////    }
//    mul = a[n - 3] * a[n - 2] * a[n - 1];
//    mul2 = a[0] * a[1] * a[n-1];
//    if (mul > mul2) cout << mul;
//    else cout << mul2;
//
//
//    return 0;
//}
//
//
