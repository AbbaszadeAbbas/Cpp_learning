#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775807
using namespace std;
void result()
{
	ll a,sum =0 ,helper;
	cin>>a;
	for(ll i =1;i<=a;i++)
	{
		sum+=i;
	}
	for(ll i = 0;i<a-1;i++)
	{
		cin>>helper;
		sum-=helper;
	}
	cout<<sum;
}
int main()
{
	result();
	cout<<endl;
    system("pause");
	return 0;
}