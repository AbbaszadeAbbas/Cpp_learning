#include <iostream>
using namespace std;
int main(){ 
    int n,cem=0; 
    while(cin>>n){ 
        if(n%2==0) cem+=n;
    }
    cout<<cem;
}