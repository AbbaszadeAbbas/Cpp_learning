#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    long double x, y;
    cin >> x >> y;
    double a = (pow(x, 2)-(2*x*y) + (4*(pow(y, 2)))) / (x+5); 
    double b = ((3*(pow(x, 2))) - (pow(y,2))) / (y-7);
    cout << setprecision(3) << fixed << a+b << endl;
}