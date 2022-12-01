#include <bits/stdc++.h>
using namespace std;
int main(){ 
    long long n; 
    cin >> n; 
    long long cur = 1; 
    long long cnt = 0; 
    while(cnt != n){ 
        if((cur % 2 != 0) && (cur % 3 != 0) && (cur % 5 != 0)){ cout << cur << " "; cnt++; } cur++; 
    } 
    return 0;
}