#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,helper = 1;
    cin>>a>>b;
    for(long long i = 0;i<a;i++){
        for(long long j = 0;j<b;j++){
            cout<<helper<<" ";helper++;
        }
        cout<<endl;
    }
}