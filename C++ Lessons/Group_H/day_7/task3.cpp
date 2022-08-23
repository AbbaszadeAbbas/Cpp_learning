#include <bits/stdc++.h>
using namespace std;
int main() {
  double total = 0,say = 0;
  int n;
  cin>>n;
  double a[n];
  for(int i = 0; i < n;i++){
    cin>>a[i];
    if(a[i]>0){
      say+=1;
      total+=a[i];
    }else{}
  }
  for(int i = 0;i<n;i++){
    if(a[i]<=0){
      cout<<"Not Found";
      return 0;
    }
  }

  cout.precision(2);
  cout<<fixed<<total/say;
}