#include <iostream>
#include <cmath>
using namespace std;

int main() {
  long long x;
  cin>>x;
  long long result = sqrt(x);
  if(result*result == x){
    cout<<result;
  }else{
    cout<<"No";
  }

  return 0;
}