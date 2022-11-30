#include <bits/stdc++.h>
using namespace std;
int number_of_divisors(int n){
    int say = 0, sq = sqrt(n);
    for(int i = 1; i <= sq; i++){
        if(n%i == 0){
            say++;
            if(i != n/i){
                say++;
            }
        }
    }
    return say;
}
int main(){
    map<int, int>m;
    int a, b, maks = 0, bolen;
    cin>>a>>b;
    for(int i = a; i <= b; i++){
        int say = number_of_divisors(i);
        m[say]++;
    }
    for(auto i = m.begin(); i != m.end(); i++){
        if(i->second >= maks){
            maks = i->second;
            bolen = i->first;
        }
    }
    cout<<bolen<<" "<<maks<<endl;
}