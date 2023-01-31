#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775806
using namespace std;
int main()
{
	ll n,q;
	cin>>n>>q;
	vector<ll>values(n+1);
	vector<ll>positionOF(n+1);
	for(ll i = 1;i<=n;i++)
	{
		cin>>values[i];
		positionOF[values[i]] = i;
	}
	ll ans = 1;
	for(ll i = 1;i<n;i++)
	{
		// ans+=(positionOF[i] > positionOF[i+1]);
		if(positionOF[i] > positionOF[i+1])ans++;
	}
	ll l,r;
	set<pair<ll,ll>>updatedPairs;
	while(q--)
	{
		cin>>l>>r;
		if(values[l]+1<=n)updatedPairs.insert({values[l],values[l]+1});
		{
			
		}
		if(values[l]-1>=1)updatedPairs.insert({values[l]-1,values[l]});
		{
			
		}
		if(values[r]+1<=n)updatedPairs.insert({values[r],values[r]+1});
		{
			
		}
		if(values[r]-1>=1)
		{
			updatedPairs.insert({values[r]-1,values[r]});
		}
		for(pair<ll,ll> swapped : updatedPairs)
		{
			ans -= positionOF[swapped.first] > positionOF[swapped.second];
		}
		swap(values[l], values[r]);
		positionOF[values[l]] = l;
		positionOF[values[r]] = r;
		for(pair<ll,ll> swapped : updatedPairs)
		{
			ans += positionOF[swapped.first] > positionOF[swapped.second];
		}
		cout << ans << endl;
		updatedPairs.clear();
	}
}