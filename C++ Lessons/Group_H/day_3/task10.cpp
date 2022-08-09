#include <bits/stdc++.h>
#include <cmath>
using namespace std;
long long one(int x){
  return (long long)x*x-3*x+4;
}
int two(int x) {
  return x+7;
}
int main() {
  int x;
  cin>>x;
  if(x<5){
    cout<<one(x);
  }else if(x>=5){
    cout<<two(x);
  }
}