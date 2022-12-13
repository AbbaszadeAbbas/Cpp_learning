#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, m1[1001], m2[1001], n, ans = 1, maxi;
char ch;
int main()
{
    cin>>n;
    for(int i = 1; i <= n; i++ ){
        cin>>a>>ch>>b>>c>>ch>>d;
        m1[i] = 60 * a + b;
        m2[i] = 60 * c + d;
    }
    for(int i = 1; i <= n; i++ ){
        for(int j = 1; j < n; j++ ){
            if(m2[j] > m2[j + 1]){
                swap(m1[j],m1[j + 1]);
                swap(m2[j],m2[j + 1]);
            }
            else if(m2[j] == m2[j + 1] && m1[j] > m1[j + 1]){
                 swap(m1[j],m1[j + 1]);
            }
        }
    }
    maxi = m2[1];
    for(int i = 2; i <= n; i++){
        if(m1[i] >= maxi ){
            ans++;
            maxi = m2[i];
        }
    }
   cout<<ans<<endl;
}