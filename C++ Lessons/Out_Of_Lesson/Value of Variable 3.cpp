#include <bits/stdc++.h>
using namespace std;
int main() { 
    double x;
    cin >> x;
    cout << fixed << setprecision(3) << (double)((pow(x, 2)+(3*x)-4)/((2*x)-3))-((x+2) / ((pow(x,2)-(5*x)+7))) << endl;
}