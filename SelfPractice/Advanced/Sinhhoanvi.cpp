//#include <iostream>
//using namespace std;
//
//int n;
//int *g = new int(25);
//bool *check = new bool(25);
//
//void output()
//{
//    for (int i = 1; i <= n; i++)
//    {
//        cout << g[i];
//    }
//    cout << endl;
//}
//
//void gen(int i, int n)
//{
//    for (int val = 1; val <= n; val++)
//    {
//        if (check[val] == false)
//        {
//            g[i] = val;
//            check[val] = true;
//            if (i == n) output();
//            else gen(i+1, n);
//            check[val] = false;
//        }
//    }
//}
//
//int main()
//{
//    cin >> n;
//    gen(1, n);
//    return 0;
//}
