//#include<iostream>
//#include <iomanip>
//#include <math.h>
//using namespace std;
//
////double gcd(double a, double b){
////    if (a == 0 || b == 0){
////        return a + b;
////    }
////    while (a != b){
////        if (a > b){
////            a -= b; // a = a - b
////        }else{
////            b -= a;
////        }
////    }
////    return a; // return a or b
////}
//
//int main(){
//    double a1, b1, c1, a2, b2, c2;
//    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
//    // Tính định thức và các định thức con
//    long D = a1 * b2 - a2 * b1;
//    long Dx = c1 * b2 - c2 * b1;
//    long Dy = a1 * c2 - a2 * c1;
//
//// Kiểm tra và xuất kết quả
//    if (D == 0)
//    {
//        if (Dx == 0)
//            std::cout << "VOSONGHIEM" << std::endl; // Hệ có vô số nghiệm
//        else
//            std::cout << "VONGHIEM" << std::endl;   // Hệ vô nghiệm
//    }
//    else
//    {
//        double x = static_cast<double>(Dx) / static_cast<double>(D);
//        double y = static_cast<double>(Dy) / static_cast<double>(D);
//        std::cout << std::fixed; // Hiển thị số thực với độ chính xác cố định
//        std::cout.precision(2);  // Độ chính xác 2 chữ số sau dấu thập phân
//        std::cout << x << " " << y << std::endl; // Xuất kết quả
//    }
//
//    return 0;
////    if (a/d == b/e && b/e != c/f)
////    {
////        cout << "VONGHIEM";
////        return 0;
////    }
////    else if (a/d == b/e && b/e == c/f)
////    {
////        cout << "VOSONGHIEM";
////        return 0;
////    }
////    else
////    {
////        double lcm = a * d / gcd(a, d);
////        if (a * d < 0)
////        {
////            double tu = lcm/a;
////            double mau = lcm/d;
////            y = (c * tu + f * mau)/(b * tu + e * mau);
////            x = (c - b * y)/a;
////        }
////        else
////        {
////            double tu = lcm/a * (-1);
////            double mau = lcm/d;
////            y = (c * tu + f * mau)/(b * tu + e * mau);
////            x = (c - b * y)/a;
////        }
////
////    }
////    cout << fixed << setprecision(2) << x << " " << y;
//}
