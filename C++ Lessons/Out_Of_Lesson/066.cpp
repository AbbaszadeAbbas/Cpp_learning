#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b;
    cin>>a>>b;
    a = abs(a);
    b = abs(b);
    if(a % b == 0){
        cout<<1;
    }else{
        cout<<0;
    }
}