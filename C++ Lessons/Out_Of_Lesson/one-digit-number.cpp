#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    a = abs(a);
    if(a>=0 && a<=9){
        cout<<"Ok";
    }else{
        cout<<"No";
    }
    return 0;
}