#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  cout<<max(a, max(b, max(c, d)));
}