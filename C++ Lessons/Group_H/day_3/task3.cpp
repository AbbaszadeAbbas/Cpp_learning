#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
  int a,b,c;
  cin>>a>>b>>c;
  if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}