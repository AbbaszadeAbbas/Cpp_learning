#include<bits/stdc++.h>
#include<cmath>
using namespace std; 
int main(){ 
    double x,y; 
    cin>>x>>y; 
    cout<<setprecision(3)<<fixed<<((2*x*y)/(sqrt(x*x+y*y)))-(pow((x+y-1),2))/(x*y); 
}