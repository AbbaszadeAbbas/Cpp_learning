#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin>>n;
	if(n%2 != 0 || n>0 && n<=999 && n>=100){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}