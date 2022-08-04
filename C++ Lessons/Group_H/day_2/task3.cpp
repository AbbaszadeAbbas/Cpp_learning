#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin>>a;
  int first = a/100;
  int second = a/10%10;
  int third = a%10;
  cout<<first*second*third;
  return 0;
}