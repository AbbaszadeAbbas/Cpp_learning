#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a;
    cin>>a;
    for(long long i = 2;i<31;i++){
        if(a%i == 0){
            cout<<i;
            return 0;
        }
    }
    cout<<a;
}