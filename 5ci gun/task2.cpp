#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  double a[n];
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }
  double total = 0;
  for(int i = 0; i < n; i++){
    int say = 0;
    if(a[i] >= 0){
      total += a[i];
      say == 1;
      break;
    }

    if(say == 0){
      cout<<"Not Found :(";
      break;
    }
  }
cout.precision(2);
cout<<fixed<<total/n;
}