////#include <iostream>
////#include <vector>
////using namespace std;
////
////int main() {
////    vector<int> ten_vector(10);
////    ten_vector = {10, 20, 30, 40, 50};
////
////    cout << "Size : " << ten_vector.size() << endl;
////
////    cout << "Capacity : " << ten_vector.capacity() << std::endl;
////
////
////    return 0;
////}
//#include <iostream>
//
//using namespace std;
//
//class Box {
//   public:
//      static int objectCount;
//
//      // Constructor definition
//      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
//         cout <<"Constructor called." << endl;
//         length = l;
//         breadth = b;
//         height = h;
//
//         // Increase every time object is created
//         objectCount++;
//      }
//      double Volume() {
//         return length * breadth * height;
//      }
//
//      static int getCount() {
//          Box box1;
//          box1.show();
//         return objectCount;
//      }
//
//      void show() {
//        cout << "Length : " << length << ", Breadth : " << breadth << ", Height : " << height << endl;
//      }
//
//   private:
//      double length;     // Length of a box
//      double breadth;    // Breadth of a box
//      double height;     // Height of a box
//};
//
//// Initialize static member of class Box
//int Box::objectCount = 0;
//
//int main(void) {
//   // Print total number of objects before creating object.
//   cout << "Inital Stage Count: " << Box::getCount() << endl;
//
//   Box Box1(3.3, 1.2, 1.5);    // Declare box1
//   Box Box2(8.5, 6.0, 2.0);    // Declare box2
//
//   // Print total number of objects after creating object.
//   cout << "Final Stage Count: " << Box::getCount() << endl;
//
//   return 0;
//}
