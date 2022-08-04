#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin>>a;
  int first = a/1000;
  int second = a%10;
  cout<<first+second;
  return 0;
}