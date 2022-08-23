#include <bits/stdc++.h>
using namespace std;
int main() {
  double total = 0,say = 0, use = 0;
  int n;
  cin>>n;
  double a[n];
  for(int i = 0; i < n;i++){
    cin>>a[i];
    if(a[i]>0){
      use = 1;
      say+=1;
      total+=a[i];
    }
  }
  if(use == 0){
    cout<<"Not Found";
    return 0;
  }
  if(use = 1){
    cout.precision(2);
    cout<<fixed<<total/say;
  }
}