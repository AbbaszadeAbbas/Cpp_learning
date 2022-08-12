#include <bits/stdc++.h>
using namespace std;
int main() {
  double a,b,c;
  cin>>a>>b>>c;
  double first = a+b+c;
  cout.precision(4);
  cout<<fixed<<first<<" ";
  double second = a*b*c;
  cout.precision(4);
  cout<<fixed<<second<<endl;
}