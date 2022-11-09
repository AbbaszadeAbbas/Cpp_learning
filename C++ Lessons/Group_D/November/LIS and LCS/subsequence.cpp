#include <bits/stdc++.h>
using namespace std;

int main()
{
   	int n;
   	cin>>n;
   	int a[n], len[n], max_len = 1;
   	for(int i = 0; i < n; i++){
        cin>>a[i];
   	}
   	for(int i = 0; i < n; i++){
        len[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                len[i] = max(len[i], len[j]+1);
            }
        }
        max_len = max(max_len, len[i]);
   	}
   	cout<<max_len<<endl;
}