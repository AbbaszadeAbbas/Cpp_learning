#include <bits/stdc++.h>
using namespace std;
int main(){
  long long size,input,helper;
  cin>>size;
  priority_queue<long long>array;
  vector<long long>result;
  for(int i = 0;i<size;i++){
    cin>>input;
    if(input == 1){
      result.push_back(array.top());
      array.pop();
    }
    if(input == 0){
      cin>>helper;
      array.push(helper);
    }
  }
  for(int i = 0;i<result.size();i++){
    cout<<result[i]<<endl;
  }
}