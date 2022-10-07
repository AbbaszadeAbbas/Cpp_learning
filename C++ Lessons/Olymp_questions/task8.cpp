#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a,b,c,sum=0;
  cin>>a>>b>>c;
  long long big = max(b, c);
  long long small = min(b, c);
  if(a==1){
    cout<<big<<"\n";
  }else if(a>1){
    sum += (a-(a/2))*big;
    sum += (a/2)*small;
    cout<<sum;
  }
}