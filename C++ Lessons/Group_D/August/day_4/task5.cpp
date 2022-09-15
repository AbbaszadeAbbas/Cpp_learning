#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	getline(cin, a);
	int x,y;
	cin>>x>>y;
	cout<<a.substr(0,x);
	cout<<a.substr(y+1)<<endl;
}
