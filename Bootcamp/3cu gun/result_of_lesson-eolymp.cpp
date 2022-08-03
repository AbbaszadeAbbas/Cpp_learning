#include <iostream>

using namespace std;

int main() {
  int a;
  cin>>a;
  if (a>=1 &&a<=3){
    cout<<"Initial";
  }else if (a<=64){
    cout<<"Average";
  }else if (a<= 9){
    cout<<"Sufficient";
  }else if (a<= 12){
    cout<<"High";
  }
}