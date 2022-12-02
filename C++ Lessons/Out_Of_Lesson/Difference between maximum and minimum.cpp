#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,helper,maxi,mini;
    cin>>a;
    set<long long>s;
    for(long long i = 0;i<a;i++){
        cin>>helper;
        s.insert(helper);
    }
    cout<<*s.rbegin()-*s.begin();
}