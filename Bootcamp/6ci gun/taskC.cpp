#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, say, fl;
    cin>>n;
    for(int i = n + 1; true; i++){
        m = i;
        fl = say = 0;
        int a[10] = {0};
        while(m > 0){
            a[m%10]++;
            m /= 10;
            say++;
        }
        for(int digit = 0; digit < 10; digit++){
            if(a[digit] > 1){
                fl = 1;
                break;
            }
        }
        if(fl == 0){
            cout<<i<<endl;
            break;
        }
    }
} 