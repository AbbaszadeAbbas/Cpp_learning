#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  getline(cin, s);
  for(int i = 0; i<s.length(); i++){
    if(s[i]=='a'){
      char b = 'b';
      swap(s[i], b);
    }else if(s[i]=='b'){
      char a = 'a';
      swap(s[i], a);
    }

    if(s[i]=='A'){
      char B = 'B';
      swap(s[i], B);
    }else if(s[i]=='B'){
      char A = 'A';
      swap(s[i], A);
    }
  }
  cout<<s<<endl;
}