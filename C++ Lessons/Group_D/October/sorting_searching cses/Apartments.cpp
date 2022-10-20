#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a,b,c,helper,count = 0;
  cin>>a>>b>>c;
  vector<long long>v1;
  vector<long long>v2;
  for(long long i = 0;i<a;i++){
    cin>>helper;
    v1.push_back(helper);
  }
  for(long long i = 0;i<b;i++){
    cin>>helper;
    v2.push_back(helper);
  }
  for(long long i = 0;i<a;i++){
    for(long long j = 0;j<v2.size();j++){
      if(v1[i]-c- 1<v2[j] && v2[j] < v1[i]+1){
        count+=1;
        v2.erase(v2.begin() + j);
        break;
      }else{
        continue;
      }
    }
  }
  cout<<count;
}