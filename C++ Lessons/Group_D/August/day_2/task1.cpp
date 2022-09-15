#include <bits/stdc++.h>
#include <cmath>
using namespace std;


double f(double x){
  return x*x*x+2*x*x-3;
}
int main() {
  double x;
  while(cin>>x){
    cout.precision(4);
    cout<<fixed<<f(x)<<endl;
  }
}