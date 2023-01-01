#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, m = 5, s = 0;
    cin >> n;
    while(n >= m){
        s += (n / m);
        m *= 5;
    }
    cout << s;
}