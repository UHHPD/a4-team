#include <cmath>
#include <iostream>



int pktin = 0;
int pktout = 0;
int iterations = 1000;


 double abstand (int x, int y){
   double a = sqrt(x*x + y*y);
    return a;
  }


int main()
{




  
for (int i= 0; i <100; ++i){
   int x = rand() %200-100;
   int y = rand() %200-100;

  std::cout<< abstand(x,y)<<std::endl;
}
}