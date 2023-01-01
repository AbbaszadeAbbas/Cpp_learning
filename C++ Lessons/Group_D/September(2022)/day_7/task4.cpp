#include <bits/stdc++.h>
using namespace std;
int main(){
    long long s,h;
    cin>>s;
    set<long long>a;
    for(long long i = 0;i<s;i++){
        cin>>h;
        a.insert(h);
    }
    auto result = a.end();
    result-- ;
    result-- ;
    cout<<*result;
}