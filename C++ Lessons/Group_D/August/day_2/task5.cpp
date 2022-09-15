#include <bits/stdc++.h>
#include <cmath>
using namespace std;
long long f(long long x) {
  return  1+x+x*x;
}
int main() {
  long long x;
  cin>>x;
  cout<<f(x);
}