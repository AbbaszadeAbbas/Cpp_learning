#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int f91(int n){
  int result = 0;
  if(n <= 100){
    result = f91(f91(n + 11));
  }else if(n >= 101){
    result = n - 10;
  }

  return result;
}

int main() {
  int n;
  cin>>n;
  cout<<f91(n);
}