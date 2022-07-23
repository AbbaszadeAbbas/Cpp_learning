#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int n;
  cout<<"Please enter length of array: ";
  cin>>n;
  int a[n];
  cout<<"Please enter array elements: ";
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }

  int max = a[0];
  for(int i = 0; i < n ; i++){
    if(a[i] > max){
      max = a[i];
    }
  }
  cout<<"'"<<max<<"'"<<" is the biggest number of your array.";
}