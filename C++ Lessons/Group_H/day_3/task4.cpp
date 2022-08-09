#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
  int a;
  cin>>a;
  if(a<=2){
    cout<<"Winter"<<endl;
  }else if(a<=5){
    cout<<"Spring"<<endl;
  }else if(a<=8){
    cout<<"Summer"<<endl;
  }else if(a<=11){
    cout<<"Autumn"<<endl;
  }else{
    cout<<"Winter"<<endl;
  }
}