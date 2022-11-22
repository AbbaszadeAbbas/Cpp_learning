#include <bits/stdc++.h>
using namespace std;
int main() {
    double x,y;
    cin>>x>>y;
    cout<<setprecision(3)<<fixed<<2*x*x - 4*x*y + 3*y*y + ((x + y) / 7);
}