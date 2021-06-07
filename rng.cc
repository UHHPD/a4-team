#include <iostream>
#include <thread>
using namespace std;

long pktin = 0;
static int iterations = 1e9;

void randomCycle() {
  long circ = 0;
  for (int i = 0; i < iterations; ++i){
   int x = rand() % 100;
   int y = rand() % 100;

   if (x*x + y*y <= 10000)
     circ++;

 }
 pktin += circ;
 cout << "success\n";
}

int main()
{

  thread t1 (randomCycle);
  thread t2 (randomCycle);
  thread t3 (randomCycle);
  thread t4 (randomCycle);
  ////////////////////////
  t1.join();
  t2.join();
  t3.join();
  t4.join();

  double d = (double) iterations;
  std::cout << pktin / d << std::endl;

}