#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,bos,say;
    string s;
    cin>>a;
    for(long long i = 0;i<a;i++){
        cin>>bos>>say>>s;
        cout<<bos<<" ";
        for(long long j = 0;j<s.size();j++){
            for(long long z = 0;z<say;z++){
                cout<<s[j];
            }
        }
        cout<<endl;
    }
}