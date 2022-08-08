#include <bits/stdc++.h>
#include <cmath>
using namespace std;
long long f(int n){
  long long total = 1;
  for(int i = 1;i<n+1;i++){
    total *= i;
  }
  return total;
}

int main() {
  int n;
  cin>>n;
  cout<<f(n);
}