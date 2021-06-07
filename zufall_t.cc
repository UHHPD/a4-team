#include <cmath>
#include <iostream>



int pktin = 0;
int pktout = 0;
int iterations = 1e6;

//abstands funktion
 double abstand (int x, int y){
   double a = sqrt(x*x + y*y);
    return a;
  }

int main()
{

  //methode; für liegt der punkt im kreis
 for (int i = 0; i < iterations; ++i){
   int x = rand() % 200-100; // [0, 200] -> [-100, 100]
   int y = rand() % 200-100;

 
   if (abstand(x, y) <= 100)
   {
     pktin = pktin +1;
   }

 }

  std::cout << 4.0 * pktin / iterations << std::endl;

}

