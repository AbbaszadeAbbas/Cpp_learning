#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a,helper;
  string helper2;
  cin>>a;
  set<string>s;
  vector<long long>v;
  vector<long long>result;
  for(int j = 0;j<a;j++){
    cin>>helper;
    v.push_back(helper);
    for(int i = 0;i<v[j];i++){
      cin>>helper2;
      s.insert(helper2);
      helper2 = " ";
    }
    result.push_back(s.size());
    s.clear();
  }
  for(int i = 0;i<result.size();i++){
    cout<<result[i]<<endl;
  }
}