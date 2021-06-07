#include <iostream>
#include <cmath>
using namespace std;

int a = 5, c=3, m = 16, I = 15;
int numCircle = 0, N = 1e4;

double zufall() {
  I *= a;
  I += c;
  I %= m;

  return ((double)I)/m;
}

int main() {
  int N_arr[] = {100, 10000, 100000, 1000000};
  double p = M_PI/4;

  for (int _ = 0; _ < 4; _++) {
    N = N_arr[_];

    for (int i = 0; i < N; i++) {
      double x = zufall();
      double y = zufall();

      if (x*x + y*y <= 1)
        numCircle++;
    }

    cout << "using: a=" << a << " c=" << c << " m=" << m << endl;
    cout << "N:\t" << N << endl;
    cout << "N inside:\t" << numCircle << endl;
    double pi = 4.0 * numCircle / N;
    cout << "π:\t" << pi << endl;
    double sigma = 4 * sqrt(p*(1-p)*N)/N;
    cout << "σ:\t" << sigma << endl;

    a = 205;
    c = 39573;
    m = 139968; 
    numCircle = 0;
    for (int i = 0; i < N; i++) {
      double x = zufall();
      double y = zufall();

      if (x*x + y*y <= 1)
        numCircle++;
    }

    cout << "using: a=" << a << " c=" << c << " m=" << m << endl;
    cout << "N:\t" << N << endl;
    cout << "N inside:\t" << numCircle << endl;
    pi = 4.0 * numCircle / N;
    cout << "π:\t" << pi << endl;
    sigma = 4 * sqrt(p*(1-p)*N)/N;
    cout << "σ:\t" << sigma << endl;
  }
}