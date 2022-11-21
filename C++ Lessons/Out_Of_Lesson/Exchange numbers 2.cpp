#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin>>a;
    swap(a[a.size()-3], a[a.size()-1]);
    cout<<a;
}