#include <bits/stdc++.h>
#include <cmath>
using namespace std;
long long f(long long x , long long y , long long z){
  return  x*y*z + x + y*y + z*z*z;
}
int main(){
  long long x,y,z;
  cin>>x>>y>>z;
  cout<<(long long)f(x,y,z);
}