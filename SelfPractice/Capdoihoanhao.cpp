//#include <iostream>
//#include <math.h>
//using namespace std;
//
//
//
//void perfect(int a[], int n)
//{
//    int m[n];
//    int max = 0;
//    int index = 0;
//    for (int i = 0; i < n - 1; i++)
//    {
//        m[i] = a[i] + a[i+1];
//    }
//    m[n-1] = a[n - 1] + a[0];
//    for (int i = 0; i < n; i++)
//    {
////        cout << m[i] << " ";
//        if (max <= m[i])
//        {
//            max = m[i];
//            index = i;
//        }
//    }
////    cout << " " << endl;
////    cout << "Max : " << max << endl;
////    cout << "Index : " << index << endl;
//    if (index == n - 1) cout << a[index] << " " << a[0] << endl;
//    else cout << a[index] << " " << a[index + 1] << endl;
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
//    perfect(a, n);
//
//    return 0;
//}
//
//
//
