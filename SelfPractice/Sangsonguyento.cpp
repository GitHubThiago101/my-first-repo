//////#include <iostream>
//////#include <math.h>
//////using namespace std;
//////
//////bool ngto(long n)
//////{
//////    for (long i = 2; i <= sqrt(n); i++)
//////    {
//////        if (n%i == 0) return false;
//////    }
//////    return n > 1;
//////}
//////
//////int main()
//////{
//////    long n;
//////    cin >> n;
//////    if (n < 2) return 0;
//////    for (long i = 2; i <= n; i++)
//////    {
//////        if (ngto(i) != 0) cout << i << " ";
//////    }
//////
//////}
////// Code from https://blog.luyencode.net
////
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int main()
//{
//    long N;
//    cin >> N;
//    bool check[N + 1];
//    // Khởi tạo tất cả các số [2...N] đều là số nguyên tố
//    for (int i = 2; i <= N; i++)
//    {
//        check[i] = true;
//    }
//
//    // Thuật toán sàng nguyên tố
//    // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
//    for (int i = 2; i <= N; i++)
//    {
//        if (check[i] == true)
//        {
//            for (int j = 2 * i; j <= N; j += i)
//            {
//                check[j] = false;
//            }
//        }
//    }
//    // In ra các số là số nguyên tố
//    for (int i = 2; i <= N; i++)
//    {
//        if (check[i] == true)
//        {
//            printf("%d ", i);
//        }
//    }
//}
