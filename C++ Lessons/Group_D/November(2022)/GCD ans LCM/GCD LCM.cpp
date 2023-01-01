#include <bits/stdc++.h>
using namespace std;
int main() {
    long long size;
    cin>>size;
    long long gcd,lcm,hasil;
    bool check = false;
    for(long long i = 0;i<size;i++){
        cin>>gcd>>lcm;
        hasil = gcd*lcm;
        for(long long j = 1;j<hasil;j++){
            if((__gcd(j, hasil/j) == gcd) and (hasil/__gcd(j,hasil/j) == lcm)){
                check = true;
                cout<<j<<" "<<hasil/j<<endl;
                break;
            }
        }
        if(check == false){
            cout<<-1<<endl;
        }
        check = false;
    }
    
}