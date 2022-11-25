#include <iostream>
using namespace std; 
int main() { 
    int n; 
    cin >> n; 
    if((n % 2 == 0 and (n >= 0 or n % 3 != 0)) or (n % 3 == 0 and n < 0 and n % 2 != 0)){ 
        cout << "YES"; 
    } else{ 
        cout << "NO"; 
    }

    return 0;
}