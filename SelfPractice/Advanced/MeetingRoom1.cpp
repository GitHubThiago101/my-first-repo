//#include <iostream>
//#include <algorithm>
//#include <list>
//using namespace std;
//
//class Meeting
//{
//public:
//    int start, end;
//};
//
//int n;
//Meeting *meetings = new Meeting[5005];
//int ans = 0;
//
//
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> meetings[i].start >> meetings[i].end;
//    }
// //   sort(meetings, 1, n+1, (o1, o2) -> (o1.end - o2.end))
//    //Sap xep do uu tien cua phong hop, nhung thang nao co do uu tien lon thi day len tren
//    sort(meetings, meetings + n, [](Meeting &o1, Meeting &o2){return o1.end - o2.end;}); //>0 doi cho ,=0 ko lam gi ca => sap xep tang dan
//    //list<Meeting> selectMeetings;
//    int curEndtime = 0;
//    int cnt = 0;
//    for (int i = 1; i <= n; i++)
//    {
////        bool isOverlapped = false;
////        for (Meeting tmp: selectMeetings)
////        {
////            if (meetings[i].start >= tmp.end || tmp.start >= meetings[i].end)
////            {
////                continue;
////            }
////            else
////            {
////                isOverlapped = true;
////                break;
////            }
////        }
////
////        if (isOverlapped == false)
////        {
////            selectMeetings.push_back(meetings[i]);
////        }
//        if (meetings[i].start >= curEndtime)
//        {
//            cnt++;
//            curEndtime = meetings[i].end;
//        }
//    }
//    //cout << selectMeetings.size();
//    cout << cnt;
//    return 0;
//}
////Do phuc tap
//
//
//
