//#include <iostream>
//using namespace std;
//
//int *g = new int[100010];
//int *w = new int[100010];
//int n;
//int C;
//int ans = 0;
//
//void output()
//{
//    int sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        //cout << g[i];
//        if (g[i] == 1)
//        {
//            sum += w[i];
//        }
//        if (sum <= C)
//        {
//            ans = max(ans, sum);
//        }
//    }
//    //cout << endl;
//}
//
//void gen(int i, int n)
//{
//    for (int j = 0; j <= 1; j++)
//    {
//        g[i] = j;
//        if (n == i) output();
//        else gen(i+1, n);
//    }
//}
//
//int main()
//{
//    cin >> n >> C;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> w[i];
//    }
//    gen(1, n);
//    cout << ans;
//    return 0;
//}
