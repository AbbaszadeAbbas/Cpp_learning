#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin>>n;
	if(n%2 == 0){
		cout<<"YES";
		return 0;
	}
	if(n<0 && n%3==0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
