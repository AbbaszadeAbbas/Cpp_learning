#include <bits/stdc++.h>
#include <cmath>
using namespace std;

double f(double x){
  return sqrt(x) + 2*x + sin(x);
}

int main() {
  double x;
  while(cin>>x){
    cout<<setprecision(5)<<f(x)<<endl;
  }
  return 0;
}