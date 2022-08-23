#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin>>n;
  long long a[n];
  for(long long i = 0; i < n;i++){
    cin>>a[i];
    if(a[i]>=0){
      cout<<a[i]+2<<" ";
    }else{
      cout<<a[i]<<" ";
    }
  }
}