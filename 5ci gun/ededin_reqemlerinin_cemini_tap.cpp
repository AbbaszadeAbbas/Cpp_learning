#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int a, total;
  cin>>a;
  a = abs(a);
  while(a > 0){
    total = total + a%10;
    a /= 10;
  }
  cout<<total<<endl;
}