#include <iostream>
using namespace std;
int main() {
  int a;
  cin>>a;
  int b;
  cin>>b;
  int arrays[a][b]; // = {{1,2,3},{4,5,6},{7,8,9}};
  for(int i = 0; i < a; i++){
    for(int j = 0; j < a; j++){
      cin>>arrays[i][j];
    }
  }
  int result = arrays[0][0]+arrays[0][2] + arrays[1][1] + arrays[2][0]+arrays[2][2];
  cout<<result;

  return 0;
}