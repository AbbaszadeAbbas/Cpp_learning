#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a;
    cin>>a;
    for(long long i = 1;i<=a;i+=2){
        if(a%i == 0){
            cout<<i<<endl;
        }
    }
}
