#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    long long a,b,helper = 0;
    cin>>a>>b;
    for(long long i = 0;i<a;i++){
        cin>>s;
        if(s.length()+helper<= b){
            cout<<s<<" ";
            helper += s.length();
        }else {
            cout<<endl;
            helper = s.length();
            cout<<s<<" ";
        }
    }
}
