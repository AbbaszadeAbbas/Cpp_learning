#include <bits/stdc++.h>
using namespace std;
int main() {
    double x;
    cin>>x;
    cout<<setprecision(3)<<fixed<<pow(x, 3) - (5*pow(x, 2)/7) + (9*x) - (3/x) + 1;
}