#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
	cin>>n;
	int a[n], ans = 0;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	sort(a, a + n);
	int l = 0, r = 0;
	while(r < n){
        if(a[r] - a[l] <= 2){
            ans = max(ans, r - l + 1);
            r++;
        }
        else{
            l++;
        }
	}
	cout<<ans<<endl;
}