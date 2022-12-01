#include <iostream>
using namespace std; 
int main ( ) { 
    int n,m=1,copy=1; 
    cin>>n; 
    while(n) { 
        int x=n%10; 
        if(x%2==0) {
            x++; 
        } else if(x%2!=0) { 
            x--; 
        } 
        copy+=(m*x);
        m*=10; 
        n/=10;
    } 
    cout<<copy-1; 
}