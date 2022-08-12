#include <bits/stdc++.h>
using namespace std;
int main() {
  int say = 0;
  string s;
  char c;
  getline(cin, s);
  cin>>c;
  for(int i = 0;i<s.length();i++){
    if(toupper(s[i]) == toupper(c)){
      say +=1;
    }
  }
  cout<<say;
}