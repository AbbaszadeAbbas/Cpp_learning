#include<bits/stdc++.h>
using namespace std;
int main() { 
    double a,b,c; 
    cin>>a; 
    b=(2*a-1)/pow(a,2); 
    c=sqrt(a*a+1); 
    cout<<fixed<<setprecision(3)<<b+c/2; 
}