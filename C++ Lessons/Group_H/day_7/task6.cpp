#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,say = 0;
  cin>>n;
  double a[n];
  double total = 0;
  for(int i = 0; i<n;i++){
    cin>>a[i];
  }
  for(int i = 0; i < n; i++){
    if(a[i]<0){
      say+=1;
      total += a[i];
    }else{
      continue;
    }
  }
  cout.precision(2);
  cout<<fixed<<say<<" "<<total;
}