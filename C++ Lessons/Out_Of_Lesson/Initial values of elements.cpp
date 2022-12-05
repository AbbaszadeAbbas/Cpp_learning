#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,helper,mini;
    cin>>a;
    long long m[a];
    for(long long i = 0; i<a;i++){
        cin>>m[i];
    }
    mini = (abs(*min_element(m+0, m+a)))/2;
    for(long long i = 0;i<a;i++){
        cout<<m[i]+mini<<" ";
    }
}