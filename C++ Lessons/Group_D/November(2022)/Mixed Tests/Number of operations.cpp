#include <bits/stdc++.h>
using namespace std;
int main() {
    long long counter = 0;
    string a;
    cin>>a;
    for(long long i = 1;i<a.length();i++){
        if(a[i] == '+' || a[i] == '-' ||a[i] == '*')counter++;
    }
    cout<<counter;
}