#include <bits/stdc++.h>
using namespace std;
int main(){
  double n;
  int  m;
  cin>>n;
  m = n * 1000;
  if(m%1000 == 0){
    cout<<"Ok";
  }else if(m%1000 != 0){
    cout<<"No";
  }
}