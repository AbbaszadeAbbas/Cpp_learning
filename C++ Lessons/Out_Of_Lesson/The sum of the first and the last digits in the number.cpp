#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    getline(cin, a);
    long long first = (int)a[0] - 48;
    long long second = (int)a[a.size() -1] - 48;
    cout<<first+second;
}