#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,counter = 0;
    cin>>a;
    for(long long i = 1;i<=a;i++){
        if(a%i == 0){
            counter++;
        }
    }
    cout<<counter;
}