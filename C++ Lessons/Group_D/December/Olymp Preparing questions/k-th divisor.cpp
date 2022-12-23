#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,n,say = 0;
    cin>>a>>n;
    for(long long i = 1;i<=a;i++){
        if(a%i == 0){
            say++;
        }
        if(say == n){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}