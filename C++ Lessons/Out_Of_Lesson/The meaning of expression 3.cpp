#include<bits/stdc++.h>
#include<cmath>
using namespace std; 
int main(){ 
    double x,y; 
    cin>>x>>y; 
    cout<<setprecision(3)<<fixed<<(2*x+y)/(x*x-x*y+4*y*y)+(2*x*x-x*y+y*y)/(x+4*y);
}