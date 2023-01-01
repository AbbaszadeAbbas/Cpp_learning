#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b;
    cin>>a>>b;
    if(a <= 9 and b <= 9){
        cout<<a*b;
    }else{
        cout<<-1;
    }
}