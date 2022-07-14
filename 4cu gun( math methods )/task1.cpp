#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double x,y,z;
  cin>>x>>y>>z;
  cout.precision(4);
  cout<<fixed<<x+y<<" "<<x+z<<" "<<y+z;
} 