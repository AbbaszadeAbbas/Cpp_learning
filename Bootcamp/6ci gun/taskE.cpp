#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // First part
  int n;
  cin>>n;
  int total = 0;

  for(int i = 1; i < n+1; i++){
   total +=i;
  }


  // Second part

  int a[n-1];
  // cin>>a[n-1];
  int given_total = 0;
  for(int j = 0; j < n-1; j++){
    cin>>a[j];
    given_total += a[j];
  }

  cout<<total - given_total;
  return 0;
}