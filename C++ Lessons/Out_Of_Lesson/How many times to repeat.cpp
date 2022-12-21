#include <bits/stdc++.h>
using namespace std;
long long Func(long long x) { 
    long long helper = 0; 
    while (x > 0){ helper += x % 10;    x /= 10;}
    return helper; 
}

int main() { 
    long long a, result = 0; 
    cin >> a; 
    while (Func(a) > 0) { a -= Func(a); result++;}
    cout << result << endl;
}