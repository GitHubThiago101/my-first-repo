//#include <iostream>
//using namespace std;
//
//class Meeting
//{
//public:
//    int start, end;
//};
//
//
//int n;
//int *g = new int(25);
//bool *check = new bool(25);
//Meeting *meetings = new Meeting[5005];
//int ans = 0;
//
//void output()
//{
//    int cnt = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        //Kiem tra meeting co overlap nhau ko
//        if (g[i] == 1)
//        {
//            for (int j = 1; j <= i-1; j++)
//            {
//                if (g[j] == 1)
//                {
//                    //meeting[i] meeting[j]
//                    if (meetings[i].start >= meetings[j].end
//                        || meetings[j].start >= meetings[i].end)
//                    {
//                        continue;
//                    }
//                    return;
//                }
//            }
//            cnt++;
//        }
//    }
//    ans = max(ans, cnt);
//}
//
//void gen(int i, int n)
//{
//    for (int val = 0; val <= 1; val++)
//    {
//        g[i] = val;
//        if (i == n) output();
//        else gen(i+1, n);
//    }
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        //meetings[i] = new Meeting();
//        cin >> meetings[i].start >> meetings[i].end;
//    }
//    gen(1, n);
//    cout << ans;
//    return 0;
//}
//
//
