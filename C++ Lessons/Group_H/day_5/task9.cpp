#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin>>n;
	long long total;
	while(n>0){
		cout<<n%10;
		n = n/10;
	}
	cout<<total;
}
