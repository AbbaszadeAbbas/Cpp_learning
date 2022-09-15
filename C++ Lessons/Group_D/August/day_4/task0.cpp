#include<bits/stdc++.h>
using namespace std;
int main() {
  string a;
  int b = 0;
  getline(cin, a);
  for(int i = 0; i< a.length(); i++){
    if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'){
      b+=1;
    }
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y'){
      b+=1;
    }
  }
  cout<<b<<endl;

  system("pause");
}