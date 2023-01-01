#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,prev = 0,ans1,ans2;
    cin>>a>>b;
    long long sahe = a+b;
    for(long long i = 2;i<sahe;i++){
        if(sahe%i == 0){
            if(prev == i){
                cout<<i<<" "<<sahe/i;
                return 0;
            }else{
                if(sahe == i*i){
                    cout<<i<<" "<<i;
                    return 0;
                }
            }
            prev = sahe/i;
        }
    }
}