#include <thread>
//This is the total amout of seconds to block further execution
void sleepnow(int seconds){
  if(seconds == 0 ){
    seconds = 10; 
  }
  std::this_thread::sleep_for(std::chrono::milliseconds(seconds*1000));
}

void sleepTimer(void) {
	sleepnow(10);
}

const int timeOne = 5;
const int timerTwo = 10;

void timer1() {
  std::cout << "\ntimer 1 -thread 1: "<< std::this_thread::get_id() <<" started\n";
  sleepnow(timeOne);
  std::cout << "\ntimer 1 thread 1: "<< std::this_thread::get_id() <<" ended\n";
}

void timer2() {
  std::cout << "\ntimer 2 thread 2: "<< std::this_thread::get_id() <<" started\n";
  sleepnow(timerTwo);
  std::cout << "\ntimer 2 thread 2: "<< std::this_thread::get_id() <<" ended\n";
}
void joinDetachThreads(void) {
  
	std::cout <<"\nMain thread: "<< std::this_thread::get_id() << " started\n";

  std::thread thread1(&timer1); 
  std::thread thread2(&timer2);  

  thread1.join();
  thread2.join();

  std::cout <<"\nMain thread: "<< std::this_thread::get_id() << " ended\n";
}