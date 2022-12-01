#include <bits/stdc++.h>
using namespace std;
int main() { 
    double x,y;
    cin >> x;
    double a = (pow(x, 2)+4)/2;
    double b = pow(x, 3);
    double c = 3/(x+7);
    cout << fixed << setprecision(3) << x-a+b-c;
}

