#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a;
    cin>>a;
    long long st = (a%100 - a%10)/10;
    long long nd = a%10;
    cout<<a/100<<max(st,nd);
}