#include <bits/stdc++.h>
using namespace std;
int main() {
    double x,y;
    cin>>x>>y;
    cout.precision(3);
    cout<<fixed<<(((x-y)*(x-y))/(sqrt(x*x + y*y - 1)))+((sqrt(x*x + y*y - 1))/(2*x*y));
}