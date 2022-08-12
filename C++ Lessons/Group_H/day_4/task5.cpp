#include <bits/stdc++.h>
using namespace std;
int main() {
  double x;
  cin>>x;
  double result = x + sin(x);
  cout.precision(4);
  cout<<fixed<<result<<endl;
}