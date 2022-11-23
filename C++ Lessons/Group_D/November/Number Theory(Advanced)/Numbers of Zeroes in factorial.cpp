#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n,total = 1, counter = 0;
  cin>>n;
  for(long long i = 1;i<n+1;i++){
    total *= i;
  }
  string result = to_string(total);
  for(long long i = result.size() - 1;i>=0;i--){
    if(result[i] == '0'){
        counter++;
    }else{
        break;
    }
  }
  cout<<counter;
}