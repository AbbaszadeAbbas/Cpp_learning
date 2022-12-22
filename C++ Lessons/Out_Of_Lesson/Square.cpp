#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a == b and b == c and c == d){
        cout<<a*a;
    }else{
        cout<<"No";
    }
}