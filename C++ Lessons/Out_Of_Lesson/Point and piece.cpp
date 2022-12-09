#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a1,b1,a2,b2,c1,c2;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    if(sqrt((b1-a1)*(b1-a1) + (b2-a2)*(b2-a2)) + sqrt((c1-a1)*(c1-a1) + (c2-a2)*(c2-a2)) == sqrt((c1-b1)*(c1-b1) + (c2-b2)*(c2-b2))){
        cout<<1;
    }else{
        cout<<0;
    }
}