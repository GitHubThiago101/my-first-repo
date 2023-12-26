////#include <iostream>
////#include <math.h>
////using namespace std;
////
////long long *a = new long long[100000000000];
//////bool *check = new bool[1000000];
////long n;
//////bool check(long n)
//////{
//////    long dem = 0;
//////    for (long i = 2; i <= sqrt(n); i++)
//////    {
//////        if (n%i == 0) dem++;
//////    }
//////    if (dem == 0) return 1;
//////    else return 0;
//////}
////
////void ngto(long n)
////{
////    long dem = 0;
////    bool check[n + 1];
////    // Khởi tạo tất cả các số [2...N] đều là số nguyên tố
////    for (long i = 2; i <= n; i++)
////    {
////        check[i] = true;
////    }
////
////    // Thuật toán sàng nguyên tố
////    // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
////    for (long i = 2; i <= n; i++)
////    {
////        if (check[i] == true)
////        {
////            for (long j = 2 * i; j <= n; j += i)
////            {
////                check[j] = false;
////            }
////        }
////    }
////    // In ra các số là số nguyên tố
////    for (long i = 2; i <= n; i++)
////    {
////        if (check[i] == true)
////        {
////            if (n % i == 0)
////            {
////                a[dem] = i;
////                dem++;
////            }
////        }
////    }
//////    for (long i = 2; i <= n; i++)
//////    {
//////        if (check(i) == 1)
//////        {
//////            if (n % i == 0)
//////            {
//////                a[dem] = i;
//////                dem++;
//////            }
//////        }
//////
//////    }
////    cout << dem << endl;
////    long thi = 0;
////    for (long i = 0; i < dem; i++)
////    {
////        while (n % a[i] == 0)
////        {
////            thi++;
////            n /= a[i];
////        }
////        cout << a[i] << " " << thi << endl;
////        thi = 0;
////    }
////}
////
////int main()
////{
////    cin >> n;
////    ngto(n);
////    return 0;
////}
//#include <iostream>
//using namespace std;
//#include <map>
//
//int main(){
//    long long N;
//    //cout << "\nNhap n = ";
//    cin >> N;
//
//    map<int, int> m;
//    for(long long i = 2; i <= N; i++){
//        while(N % i == 0){
//            m[i]++;
//            N /= i;
//        }
//    }
//    cout << m.size() << endl;
//    for(auto it : m){
//        cout << it.first << " " << it.second << "\n";
//    }
//}
