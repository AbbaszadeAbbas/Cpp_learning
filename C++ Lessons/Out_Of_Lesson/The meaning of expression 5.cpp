#include <bits/stdc++.h>
using namespace std;
int main() {
    double x,y;
    cin>>x>>y;
    cout.precision(3);
    cout<<fixed<<(sqrt(pow(x,2)+pow(y,2))/pow((x-y),2))-(2*x*y/sqrt(pow(x,2)+pow(y,2)));
}