////#include <iostream>
////#include <iomanip>
////#include <cmath>
////#include <string>
////#include <cctype>
////using namespace std;
////
////int main()
////{
//////    int n;
//////    cin >> n;
//////    string a[n][1000];
//////    for (int i = 0; i < n; i++)
//////    {
//////        getline(cin, a[i]);
////    //    }
////    int line, t = 0;
////    string s, bigString;
////
////    cin >> line;
////    for (int i = 0 ; i < 2; i++)
////    {
////        getline(cin,s); // This is to input the sentence
////        bigString += s + "\n";
////    }
//////    for (long int j = 0; j < bigString.length(); j++)
//////    {
//////        if(isspace(bigString[j])) t+=1;
//////    }
////    cout << bigString << endl;
////    //cout << "So khoang trang: "<< t;
////    return 0;
////}
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//int countSpaces(std::string&);
//
//int main() {
//    string str;
//    int n;
//    cin >> n;
//    string a[n];
//    std::getline(std::cin, str);
//    for (int i = 0; i < n; i++)
//    {
//
//        std::getline(std::cin, a[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        std::cout << countSpaces(a[i]) << endl;
//    }
//    return 0;
//}
//
//int countSpaces(std::string& str) {
//
//    int spaces = 0;
//
//    for (long int j = 0; j < str.length() - 1; j++)
//    {
//        if (str[j] != str[j+1])
//        {
//            if(isspace(str[j])) spaces+=1;
//        }
//
//
//        //while(isspace(str[j+1])) j++;
//    }
//
//    return spaces;
//}
