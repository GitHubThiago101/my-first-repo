//#include <bits/stdc++.h>
//using namespace std;
//
//#define N 1000111
//#define FOR(i, a, b) for (int i = a; i <=b; i++)
//
//int n, k, a[N];
//bool b[N];
//
//int main()
//{
//    cin >> n >> k;
//    FOR(i, 1, n) a[i] = i;
//    if (k == 0) FOR (i, 1, n) cout << a[i] << " ";
//    else if (n%2) cout << -1; //n khong duoc le => n%2 != 0
//    else
//    {
//        int i = 1;
//        while(1)
//        {
//            if (b[i] == false && i + k <= n) //Kiem tra phan tu da dung chua
//            {
//                swap(a[i], a[i+k]);
//                b[i] = true;
//                b[i+k] = true;
//            }
//            else if (b[i] == true) i++;
//            else break;
//
//        }
//        if (count(b+1, b+1+n, false)) cout << -1; //dem so lan xuat hien false
//        else FOR(i, 1, n) cout << a[i] << " ";
//    }
//}
