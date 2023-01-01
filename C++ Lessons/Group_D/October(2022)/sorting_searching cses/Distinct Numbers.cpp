#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n,helper,count=0;
  cin>>n;
  map<long long,long long>m;
  for(long long i = 0;i<n;i++){
    cin>>helper;
    m[helper]++;
    if(m[helper]==1){
      count++;
    }
  }
  cout<<count;
}