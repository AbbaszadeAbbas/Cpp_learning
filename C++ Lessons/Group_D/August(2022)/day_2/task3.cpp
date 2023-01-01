#include <bits/stdc++.h>
#include <cmath>
using namespace std;
double f(double x,double y){
  return x*x+sin(x*y)-y*y;
}

int main() {
  double x,y;
  while(cin>>x>>y){
    cout.precision(4);
    cout<<fixed<<f(x,y)<<endl;
  }
  return 0;
}