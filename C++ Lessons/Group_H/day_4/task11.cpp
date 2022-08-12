#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  cin>>n;
  m = sqrt(n);
  if(m*m == n){
      cout<<m<<endl;
  }
  else{
      cout<<"No"<<endl;
  }
}