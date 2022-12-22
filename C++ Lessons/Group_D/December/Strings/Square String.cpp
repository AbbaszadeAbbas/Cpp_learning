#include <bits/stdc++.h>
using namespace std; 
int main() {
    string a;
    getline(cin, a);
    long long counter = 0;
    long long halfsize = a.size()/2;
    for(long long i = 0;i<a.size();i++){
        if(a[i] == a[i+halfsize]){
            counter++;
        }
    }
    if(counter == halfsize){
        cout<<"yes";
        return 0;
    }else{
        cout<<"no";
        return 0;
    }
}