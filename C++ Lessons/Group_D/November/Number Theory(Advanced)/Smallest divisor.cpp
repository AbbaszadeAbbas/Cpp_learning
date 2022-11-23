#include <bits/stdc++.h>
#define MAXIMUM 1000000
using namespace std;
int main() {
    long long a;
    cin>>a;
    for(long long i = 2;i<MAXIMUM;i++){
        if(a%i == 0){
            cout<<i;
            return 0;
        }
    }
    cout<<a;
}