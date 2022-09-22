#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<long long>array;
  long long size,helper;
  cin>>size;
  for(int i = 0;i<size;i++){
    cin>>helper;
    array.push_back(helper);
  }

  while(cin>>helper){
    for(int i = 0;i<helper%size;i++){
      long long last = array[size-1];
      array.insert(array.begin(), last);
      array.pop_back();
    }
    for(int i = 0;i<size;i++){
      cout<<array[i]<<" ";
    }
    cout<<endl;
  }
}