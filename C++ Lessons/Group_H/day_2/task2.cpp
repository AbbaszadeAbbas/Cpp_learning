#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a,b;
  cin>>a>>b;
  long long first_power = a*a;
  long long second_power = b*b;
  cout<<(long long)first_power + second_power;
}