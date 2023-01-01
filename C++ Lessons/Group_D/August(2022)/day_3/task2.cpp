#include <bits/stdc++.h>

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

// int main() {
//   long long array[21] = {0,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,121645100408832000,2432902008176640000};
//   long long a;
//   cin>>a;
//   cout<<array[a];
// }