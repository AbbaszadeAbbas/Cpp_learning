#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a;
    cin>>a;
    a = abs(a);
    if((100-a)>0 && (9-a)<0){
        cout<<"Ok";
    }else{
        cout<<"No";
    }
    return 0;
}