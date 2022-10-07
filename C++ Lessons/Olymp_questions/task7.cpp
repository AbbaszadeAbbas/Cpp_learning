#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a,b,sum=1;
  cin>>a>>b;
  if(a<0 && b>0){
    cout<<0;
  }
  if(a>0 && b<0){
    cout<<0;
  }
  if(a==0 || b==0){
    cout<<0;
  }
  if(a>0 && b>0){
    cout<<1;
  }
  if(a<0&&b<0){
    if((a+b)%2==0){
      cout<<-1;
    }
    if((a+b)%2==1||(a+b)%2==-1){
      cout<<1;
    }
  }
}