#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  double a[n];
  for(int i = 0; i<n;i++){
    cin>>a[i];

  }
  double min = a[0];
  for(int i = 0; i<n;i++){
    if(a[i]<min){
      min = a[i];
    }
  }
  cout.precision(2);
  cout<<fixed<<min*2;
}