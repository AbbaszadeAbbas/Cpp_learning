#include <bits/stdc++.h>
using namespace std;
int main() {
  int enter;
  cin>>enter;
  int first = enter/10;
  int second = enter%10;
  int total = first + second;
  int result = pow(total , 2);
  cout<<result;
}