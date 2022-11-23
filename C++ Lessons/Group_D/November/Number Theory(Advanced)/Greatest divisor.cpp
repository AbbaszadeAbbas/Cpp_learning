#include <bits/stdc++.h>
#define MAXIMUM 1000000
using namespace std;
int main() {
    long long a;
    cin>>a;
    long long ans = a;
    for(long long i = 2;i<MAXIMUM;i++){
        if(a%i == 0){
            ans = i;
            break;
        }
    }
    cout<<a/ans;
}