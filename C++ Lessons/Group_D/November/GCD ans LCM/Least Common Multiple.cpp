#include <bits/stdc++.h>
using namespace std;
int main() {
    long long size,interior,helper,previous = 1,result = 1;
    cin>>size;
    for(long long i = 0;i<size;i++){
        cin>>interior;
        previous=1;
        result =1;
        for(long long j = 0;j<interior;j++){
            cin>>helper;
            result = previous/__gcd(result, helper) * helper/__gcd(result, helper)*__gcd(result, helper);
            previous = result;
        }
        cout<< result <<endl;
    }
}