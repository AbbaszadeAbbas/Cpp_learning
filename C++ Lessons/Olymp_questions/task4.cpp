#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a,b,one = 1,sum = 0;
  cin>>a>>b;
  long long ferq =b-a;
  while(one<=ferq){
    sum = sum+one;
    one++;
  }
  cout<<b-sum;
}