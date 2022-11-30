#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,counter = 0,x;
    double hasil;
    cin>>a>>b;
    hasil = a*b;
    for(long long i = a;i<sqrt(hasil);i+=a){
        x = hasil / i;
        if(__gcd(x, i) == a and hasil/__gcd(x, i) == b and x*i==hasil){
            counter++;
        }
    }
    cout<<counter*2;
}