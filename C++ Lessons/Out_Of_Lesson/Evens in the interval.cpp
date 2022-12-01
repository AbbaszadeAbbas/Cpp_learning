#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b;
    cin>>a>>b;
    while(b>=a){
        if(b%2==0){
            cout<<b<<" ";
        }
        b--;
    }
}