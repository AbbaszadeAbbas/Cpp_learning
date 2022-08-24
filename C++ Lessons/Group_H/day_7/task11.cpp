#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;
  cin>>n;
  long long a[n];
  for(long long i = 0; i<n;i++){
    cin>>a[i];
  }
  long long min = a[0],max = a[0],max_index = 0,min_index = 0;
  for(long long i = 1; i<n;i++){
    if(a[i]<min){
      min = a[i];
      min_index = i;
    }
  }
  swap(a[0], a[min_index]);
  for(long long i = 0;i<n;i++){
    cout<<a[i]<<" ";
  }
}