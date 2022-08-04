#include <iostream>
using namespace std;
int main() {
  int a;
  cin>>a;
  int arrays[a][a];
  for(int i = 0; i < a; i++){
    for(int b = 0; b < a; b++){
      cin>>arrays[i][b];
    }
  }


  return 0;
}