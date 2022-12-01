#include<bits/stdc++.h>
using namespace std; 
int main() { 
    long long n; 
    cin >> n; 
    n--; 
    while (n % 11 != 0) n--;
    cout << n << endl;
}