#include <bits/stdc++.h>
using namespace std;
int main() {
    long long counter = 0;
    string a;
    cin>>a;
    for(long long i = 0;i<a.size();i++)
        if(((int)a[i])% 2 == 0) counter++;

        
    if(counter == a.size()) cout<<"YES"; 
    else cout<<"NO";
}