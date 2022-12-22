#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    if(a%2 == 0){
        cout<<a+2;
        return 0;
    }
    if(a%2 == 1){
        cout<<a+1;
        return 0;
    }
}