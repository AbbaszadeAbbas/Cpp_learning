#include <iostream>
using namespace std;
int main() { 
    int n, s = 0; 
    cin >> n; 
    while (n > 0) { 
        if (n % 10 == 0) {
            s++; n /= 10; } else {
break; } } if (n == 1 && (s != 0 || s != 1)) { cout << s; } else { cout << "No"; } return 0; }