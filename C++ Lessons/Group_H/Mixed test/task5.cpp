#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,total = 1;
    cin>>n;
    while(n>0){
        total += pow(n%10, 2);
        n/=10;
    }
    cout<<total;
}
