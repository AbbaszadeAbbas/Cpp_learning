#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,counter = 0;
    cin>>a;
    string s;
    cin>>s;
    for(long long i = 0;i<a;i++){
        if(s[i] == 'A' and s[i+1] == 'B' and s[i+2] == 'C'){
            counter++;
        }
    }
    cout<<counter;
}