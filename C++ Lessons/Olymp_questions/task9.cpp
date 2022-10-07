#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a,b;
  cin>>a>>b;
  if((a+b)%2==1){
    cout<<"X";
  }else if((a+b)%2==0){
    cout<<(a+b)/2<<" ";
    cout<<(a-b)/2;
  }
}