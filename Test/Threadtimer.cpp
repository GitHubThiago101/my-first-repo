#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
#include <atomic>

void called() {
    std::cout << "Coucou !" << std::endl;
}

struct caller {
std::atomic_bool& stop;

caller(std::atomic_bool& stop_) : stop(stop_) {}
caller(caller const& other) : stop(other.stop) {}
caller( caller&& other ) : stop(other.stop) {}

void operator() () {
    auto t_start = std::chrono::high_resolution_clock::now();
    std::chrono::milliseconds delay(100);
    while(!stop) {
      std::this_thread::sleep_for(std::chrono::milliseconds(10));
      auto t_now = std::chrono::high_resolution_clock::now();
      std::chrono::milliseconds elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(t_now - t_start);
      if(delay <= elapsed) {
          t_start = t_now;
          called();
      }
    }
}
};

//int main()
//{
//    std::atomic_bool stop(false);
//    caller c1(stop);
//    std::thread thread1(c1);
//
//    // Launch your gui, I put a sleep just to show how i tworks
//    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
//
//    // Stop it
//    stop = true;
//    thread1.join();
//
//    return 0;
//}
