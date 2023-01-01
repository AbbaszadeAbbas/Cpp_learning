#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int f(int n){
    if(n == 0){
        return 0;
    }
    return f(n - 1) + n;
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n)<<endl;
}