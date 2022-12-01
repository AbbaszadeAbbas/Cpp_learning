#include<bits/stdc++.h>
using namespace std;
int main() {
    double y,x;
    cin>>x;
    y=((2*x)/(sqrt(pow(x,2)+1)))-(sqrt(pow(x,2)+1)/(pow(x,3)));
    cout<<fixed<<setprecision(3)<<y;
}