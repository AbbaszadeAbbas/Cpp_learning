#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double x;
  cin>> x;
  cout.precision(4);
  cout<<fixed<<x + sin(x);
}