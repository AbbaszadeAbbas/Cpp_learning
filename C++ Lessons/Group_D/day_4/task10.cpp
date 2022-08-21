#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, cavab = "";
    while(cin>>s){
        cavab = cavab + " " + s;
    }
    cout<<cavab.substr(1)<<endl;
}
