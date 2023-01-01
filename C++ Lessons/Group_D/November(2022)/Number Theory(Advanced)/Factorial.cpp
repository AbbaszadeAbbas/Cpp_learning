#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n,total = 1;
  cin>>n;
  for(long long i = 1;i<n+1;i++){
    total *= i;
  }
  cout<<total;
}