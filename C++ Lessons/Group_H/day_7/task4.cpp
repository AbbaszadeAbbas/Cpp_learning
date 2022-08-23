#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  double a[n],max = a[0];
  for(int i = 0; i<n;i++){
    cin>>a[i];
    if(abs(a[i])>max){
      max = abs(a[i]);
    }
  }
  cout.precision(2);
  cout<<fixed<<max;
}