#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double n;
  cin>>n;
  if(floor(n) == ceil(n)){
    cout<<"Ok";
  }else {
    cout<<"No";
  }
}