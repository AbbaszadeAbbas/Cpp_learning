#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a,b,c;
  cin>>a>>b>>c;
  if(a-b+c==2020){
    cout<<a<<"-"<<b<<"+"<<c;
    return 0;
  }
  if(a+b-c==2020){
    cout<<a<<"+"<<b<<"-"<<c;
    return 0;
  }
  if(a-b-c==2020){
    cout<<a<<"-"<<b<<"-"<<c;
    return 0;
  }
  if(a+b+c==2020){
    cout<<a<<"+"<<b<<"+"<<c;
    return 0;
  }
  if(a-b+c!=2020 && a+b-c!=2020 && a-b-c!=2020 && a+b+c!=2020){
    cout<<"CORONA";
    return 0;
  }
  system("pause");
}