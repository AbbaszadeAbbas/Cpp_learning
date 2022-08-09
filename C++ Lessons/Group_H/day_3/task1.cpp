#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
  int a;
  cin>>a;
  if(a<=3){
    cout<<"Initial"<<endl;
  }else if(a<=6){
    cout<<"Average"<<endl;
  }else if(a<=9){
    cout<<"Sufficient"<<endl;
  }else if(a<=12){
    cout<<"High"<<endl;
  }
}