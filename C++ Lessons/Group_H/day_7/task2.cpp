#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n,use = 0;
  cin>>n;
  double a[n];
  for(int i = 0; i<n;i++){
    cin>>a[i];
    if(a[i]<=2.5){
      use = 1;
      cout.precision(2);
      cout<<fixed<<i+1<<" "<<a[i];
      break;
    }
  }
  if(use == 0){
    cout<<"Not Found";
  }
}