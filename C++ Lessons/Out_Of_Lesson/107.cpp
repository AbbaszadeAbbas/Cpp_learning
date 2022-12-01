#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n; 
    cin >> n; 
    n--;
    long long ans = trunc(pow(1.0 * n, 1.0 / 3));
    long long r = pow(ans, 3);
    cout << r << endl;
}