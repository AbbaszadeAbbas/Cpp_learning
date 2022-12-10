#include <bits/stdc++.h>
using namespace std;
bool __reverse(long long i,long long b){
    if(i%11==0){
        return true;
    }
    else{
        
    }
}
int main() {
    string s;
    int a, b,counter = 0;
    cin>>a>>b;
    for(long long i = a;i<b;i++){
        if(__reverse(i,b) == true){
            counter++;
        }
    }
}