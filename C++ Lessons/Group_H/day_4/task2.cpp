#include <bits/stdc++.h>
using namespace std;
int main() {
  int input;
  cin>>input;
  int first = input/100;
  int second = input/10%10;
  int third = input%10;
  int total = first + second + third;
  double result = sqrt(total);
  cout.precision(3);
  cout<<fixed<<result<<endl;
}