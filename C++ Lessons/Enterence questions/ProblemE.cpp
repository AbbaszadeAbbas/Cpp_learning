#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
  int a;
  cin>>a;
  int array[a-1];
  for(int b = 0; b < a-1;b++){
    cin>>array[b];
  }

  int total_input;
  for(int z = 0; z < a-1;z++){
    total_input += array[z];
  }
  // cout<<"Verilen reqemlerin cemi: "<<" "<<total_input<<endl;


  int total= 0;
  for(int c = 0;c < a+1 ; c++){
    total += c;
  }
  // cout<<"Reqemlerin cemi: "<<" "<<total<<endl;

  cout<<total - total_input;
}