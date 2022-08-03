#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  double a[n];
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }

  for (int i = 0; i < n; i++){
    int say = 0;
    if(a[i] <= 2.5){
      cout.precision(2);
      cout<<i+1<<" "<<fixed<<a[i]<<endl;
      say = 1;
      break;
    }
    if (say == 0){
      cout<<"Not Found :(";
      break;
    }
  }
}