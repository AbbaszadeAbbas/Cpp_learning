#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;
  cin>>n;
  long long a[n];
  for(long long i = 0; i<n;i++){
    cin>>a[i];
  }
  long long max = a[0],max_index = 0;
  for(long long i = n-1; i>=0;i--){
    if(a[i]>max){
      max = a[i];
      max_index = i;
      break;
    }
  }
  swap(a[n-1], a[max_index]);
  for(long long i = 0;i<n;i++){
    cout<<a[i]<<" ";
  }
}