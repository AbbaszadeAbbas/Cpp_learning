#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  cin>>n;
  m = sqrt(n);
  if(pow(m, 2) == n){
      cout<<m<<endl;
  }
  else{
      cout<<"No"<<endl;
  }
}