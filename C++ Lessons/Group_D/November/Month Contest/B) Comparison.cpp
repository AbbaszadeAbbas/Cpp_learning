#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b;
    cin>>a>>b;
    long long bir_yuz = a/100;
    long long bir_tek = a%10;
    long long bir_on  = (a-((a/100)*100))/10;
    a = bir_tek*100+bir_on*10+bir_yuz;
    long long iki_yuz = b/100;
    long long iki_tek = b%10;
    long long iki_on  = (b-((b/100)*100))/10;
    b = iki_tek*100+iki_on*10+iki_yuz;
    cout<<max(a, b);
}