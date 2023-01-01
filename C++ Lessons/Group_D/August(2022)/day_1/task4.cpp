#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,say = 0,sum = 0;
  cin>>n;
  int a[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin>>a[i][j];
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(a[i][j]<0 && a[i][j]%2==0){
        say += 1;
        sum += a[i][j];
      }
    }
  }
  cout<<say<<" "<<sum;
}