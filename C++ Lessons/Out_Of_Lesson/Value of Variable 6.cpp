#include <bits/stdc++.h>
using namespace std;
int main() { 
    double x;
    cin >> x;
    double a = sqrt((pow(x, 4)+1))/pow(x, 2), b = sqrt(pow(x, 2)/(pow(x, 2)+1));
    cout << fixed << setprecision(3) << a-b << endl;
}