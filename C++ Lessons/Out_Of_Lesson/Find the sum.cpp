#include <bits/stdc++.h>
using namespace std;
int main() {
    long long z,sum =0;
    cin>>z;
    long long a = z/100;
    long long b = z/10 - a*10;
    long long c = z%10;
    sum+=a*100 + b*10 + c;
    sum+=a*100 + c*10 + b;
    sum+=b*100 + a*10 + c;
    sum+=b*100 + c*10 + a;
    sum+=c*100 + a*10 + b;
    sum+=c*100 + b*10 + a;
    cout<<sum;
}