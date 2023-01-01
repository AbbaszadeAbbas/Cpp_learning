#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin>>a;
  int arrays[a][a];
  for(int i = 0;i<a;i++){
    for(int j = 0;j<a;j++){
      cin>>arrays[i][j];
    }
  }

  int first_diagonal = 0;
  int second_diagonal = 0;

  for(int b = 0;b < a; b++){
    first_diagonal += arrays[b][b];
  }

  int b = 0;

  for(int c = a-1;c >= 0;c--){
    if(b < a){
      second_diagonal += arrays[b][c];
      b++;
    }
  }
  cout<<first_diagonal<<" "<<second_diagonal;

  return 0;
}