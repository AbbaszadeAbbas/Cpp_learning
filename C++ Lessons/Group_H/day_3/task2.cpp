#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
  int a,b,c;
  cin>>a>>b>>c;
  if(a==b && b==c){
    cout<<1<<endl;
  }else if(a==b||a==c||b==c){
    cout<<2<<endl;
  }else {
    cout<<3<<endl;
  }
}



  // Beraberterefli = 1
  // Beraberyanli = 2
  // Muxtelifterefli = 3