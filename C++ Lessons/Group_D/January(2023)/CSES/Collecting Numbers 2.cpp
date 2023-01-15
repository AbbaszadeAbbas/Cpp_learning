// #include<bits/stdc++.h>
// #define ll long long
// #define MAX 9223372036854775806
// using namespace std;
// void solve(ll num, ll ans, ll m[])
// {
// 	ans = 0;
// 	for(ll i = 1; i <= num; i++)
// 	{
// 		if(m[i] < m[i-1]){
// 			ans++;
// 		}
// 	}
// 	cout<<ans<<endl;
// }
// void result()
// {
// 	ll num,b, ans = 1,helper1,helper2;
// 	cin>>num>>b;
// 	ll a,m[num+1];
// 	vector<ll>v;
// 	for(ll i = 1; i <= num; i++)
//     {
//         cin>>a;
//         // m[a] = i;
// 		v.push_back(a);
// 	}
// 	while(b--)
// 	{
// 		cin>>helper1>>helper2;
// 		swap(v[helper1-1], v[helper2-1]);
// 		for(ll i = 1;i<=num;i++)
// 		{
// 			m[v[i-1]] = i;
// 		}
// 		solve(num, ans,m);
// 	}
	
// }
// // 4 1 2 5 3
// // 3 1 2 5 4
// // 3 2 1 5 4
// int main()
// {
// 	result();
// 	cout<<endl;
// //     system("pause");
// 	return 0;
// }


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll num,b, ans = 1,helper1,helper2;
	cin>>num>>b;
	ll a,m[num+1];
	vector<ll>v;
	for(ll i = 1; i <= num; i++)
    {
        cin>>a;
		v.push_back(a);
	}
	while(b--)
	{
		cin>>helper1>>helper2;ans = 0;
		swap(v[helper1-1], v[helper2-1]);
		for(ll i = 1;i<=num;i++)
		{
			m[v[i-1]] = i;
		}
        for(ll i = 1; i <= num; i++)
        {
            if(m[i] < m[i-1])ans++;
        }
        cout<<ans<<endl;
	}
}