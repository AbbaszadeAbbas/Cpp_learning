#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n,x,helper,sum = 0;;
  cin>>n>>x;
  for(long long i = 0;i<n;i++){
    cin>>helper;
    sum+=helper;
  }
  if(sum%x != 0){
    cout<<(sum/x) + 1;
  }
  if(sum%x == 0){
    cout<<(sum/x);
  }
}