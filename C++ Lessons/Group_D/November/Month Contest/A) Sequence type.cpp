#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,c,d,e,f,g,z;
    cin>>a>>b>>c>>d>>e>>f>>g>>z;
    if(a<b && b<c && c<d && d<e && e<f && f<g && g<z){
        cout<<"ascending";
    }else if(a>b && b>c && c>d && d>e && e>f && f>g && g>z){
        cout<<"descending";
    }else{
        cout<<"mixed";
    }
}