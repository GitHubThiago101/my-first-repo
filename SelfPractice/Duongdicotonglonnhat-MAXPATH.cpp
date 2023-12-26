////#include <iostream>
////using namespace std;
////
////
////int maxFirstColumn(int r, int c, int *a[][])
////{
////    int max = a[0][0];
////    for (int i = 0; i < r; i++)
////    {
////        if (max < a[i][0]) max = a[i][0];
////    }
////    return max;
////}
////
////int main()
////{
////    int m, n;
////    cin >> m >> n;
////    int a[m][n];
////    int sum = 0;
////    for (int i = 0; i < m; i++)
////    {
////        for (int j = 0; j < n; j++)
////        {
////            cin >> a[i][j];
////        }
////    }
////    cout << "Max : " << maxFirstColumn(m, n, a);
//////    for (int i = 0; i < m; i++)
//////    {
//////        for (int j = 0; j < n; j++)
//////        {
//////             //cout << a[i][j] << " ";
//////             sum = a[i][j] + max(a[i-1][j-1], max(a[i][j-1], a[i+1][j-1]));
//////        }
//////        //cout << endl;
//////    }
////    //cout << max(a[][1]);
////
////    return 0;
////}
//#include <iostream>
////#include <iomanip>
////#include <vector>
////#include <algorithm>
//#include <math.h>
////#define pb push_back
////#define ll long long
////#define pi acos(-1)
//using namespace std;
//int main()
//{
//    int a[200][200];
//    int r, c;
//    int x = -1000;
//    cin >> r >> c;
//    //Nhap
//    for (int i = 1; i <= r; i++)
//    {
//        for (int j = 1; j<= c; j++)
//        {
//            cin >> a[i][j];
//        }
//    }
//    //Them 2 hàng -1000 tren và duoi mang
//    for (int i = 0; i <= c; i++)
//    {
//        a[0][i] = -1000;
//        a[r+1][i] = -1000;
//    }
////    for (int i = 1; i <=r; i++)
////    {
////        for (int j = 1; j<= c; j++)
////        {
////            cout << a[i][j] << " ";
////        }
////        cout << endl;
////    }
//    cout << "Check : " << a[0][0] << endl;
//    for (int j = 1; j <= c; j++)
//    {
//        for (int i = 1; i <= r; i++)
//        {
//            //cout << "Max : " << max(a[i-1][j-1], max(a[i][j-1], a[i+1][j-1])) << endl;
//            a[i][j] = a[i][j] + max(a[i-1][j-1], max(a[i][j-1], a[i+1][j-1]));
//            cout  << a[i][j] << " ";
//        }
//        cout << endl;
//    }
//    for (int i = 1; i <= r; i++)
//    {
//        x = max(x, a[i][c]);
//    }
//    cout << x;
//}
//
