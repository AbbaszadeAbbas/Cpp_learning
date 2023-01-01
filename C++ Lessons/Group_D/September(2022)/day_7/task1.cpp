#include <bits/stdc++.h>
using namespace std;
int main(){
  set<long long>result;
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  if(b>a){swap(b,a);}
  if(d>c){swap(d,c);}
  for(int i = d;i<=c;i++){
    for(int j = b;j<=a;j++){
        result.insert(i*j);
    }
  }
  cout<<result.size();
}