#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a,b;
  cin>>a>>b;
  long long sum2 = (a+b)/2;
  long long maxi = max(a, b);
  long long mini = min(a, b);
  if(maxi - sum2 == sum2 - mini){
    cout<<sum2;
  }else if(maxi - sum2 != sum2 - mini){
    cout<<"-";
  }
}