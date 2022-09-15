#include <bits/stdc++.h>
using namespace std;
int main(){
	long long l,j,b;
	vector<long long>a;
	vector<long long>c;
	cin>>l;
	for(int i =0;i<l;i++){cin>>b;a.push_back(b);}
	cin>>j;
	for(int i =0;i<j;i++){cin>>b;c.push_back(b);}
	
	vector<long long>ans;
	for(int i =0;i<l;i++){ans.push_back(a[i]);}
	for(int i =0;i<j;i++){ans.push_back(c[i]);}
	sort(ans.begin(),ans.end());
	for(int i = 0;i<l+j;i++){
		cout<<ans[i]<<" ";
	}
}
