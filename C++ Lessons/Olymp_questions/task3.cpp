#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a,right = 0,up = 0;
  cin>>a;
  vector<string>v;
  string helper;
  for(int i = 0;i<a;i++){
    cin>>helper;
    v.push_back(helper);
  }
  for(int i = 0;i<a;i++){
    for(int j = 0;j<v[i].size();j++){
      if(v[i][j]=='>'){
        right++;
      }
      if(v[i][j]=='<'){
        right--;
      }
      if(v[i][j]=='^'){
        up++;
      }
      if(v[i][j]=='v'){
        up--;
      }
    }
    cout<<right<<" "<<up<<endl;
    right = 0;
    up = 0;
  }
}