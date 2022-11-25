#include <bits/stdc++.h>
using namespace std;
int main() { 
    long long n,m,d; 
    cin>>n>>m>>d; 
    if(n<0 && m>0 && d>0 || n>0 && m<0 && d>0 || n>0 && m>0 && d<0 || n>0 && m<0 && d<0 || n<0 && m>0 && d<0 || n<0 && m<0 && d>0){ 
        cout<<"YES"; 
    } else { 
        cout<<"NO"; 
    }
}