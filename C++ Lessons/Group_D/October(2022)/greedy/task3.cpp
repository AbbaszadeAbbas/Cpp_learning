#include<bits/stdc++.h>
using namespace std;
int main(){
  long long a,result = 0,m[6] = {500,200,100,50,20,10},helper;
  cin>>a;
  if(a%10 != 0){
    cout<<-1;
    return 0;
  }
  for(long long i = 0;i < 6;i++){
    result+=a/m[i];
    a = a-((a/m[i])*m[i]);
  }
  cout<<result;
}
