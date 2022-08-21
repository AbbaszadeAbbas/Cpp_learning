#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, hasil = 1;
    cin>>n;
    while(n != 0){
        int q = n%10;
        if(q != 0){
            hasil *= q;
        }
        n = n/10;
    }
    cout<<hasil<<endl;
}
