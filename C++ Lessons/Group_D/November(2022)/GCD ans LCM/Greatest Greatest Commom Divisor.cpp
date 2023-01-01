#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,helper,total = 1;
    cin>>a;
    for(long long i = 0;i<a;i++){
        cin>>helper;
        if(__gcd(total,helper)>total){
            total = __gcd(total,helper);
        }
    }
    cout<<total;
}