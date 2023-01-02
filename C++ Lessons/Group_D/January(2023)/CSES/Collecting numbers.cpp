#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main()
	{
	int num, ans = 1;
	cin>>num;
	int a, m[num+1];
	for(int i = 1; i <= num; i++)
	{
		cin>>a;
		m[a] = i;
	}
	for(int i = 1; i <= num; i++)
	{
		if(m[i] < m[i-1]){
		ans++;
		}
	}
	cout<<ans<<endl;
}