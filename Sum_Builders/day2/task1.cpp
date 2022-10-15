#include <bits/stdc++.h>
using namespace std;
int main(){
  /*Input and Variables*/
  long long a,b,helper,helper1;
  cin>>a>>b;
  map<long long, long long>m;
  vector<long long>v;
  for(int i = 0;i<a;i++){
    cin>>helper;
    m[helper]++;
  }
  helper1 = helper;
  for(long long i = 0;i<b;i++){
    cin>>helper;
    v.push_back(helper);
  }

  /*Major Process*/

  for(long long i = 0;i<b;i++){
    for(auto x:m){
      if(x.first == v[i]){

      }
    }
  }
}