#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    getline(cin, a);
    for(long long i = 0;i<a.size();i+=4){
        if(a[i] == ' '){
            i-=3;
            cout<<" ";
        }else{
            cout<<a[i]<<a[i+1];
        }
    }

}