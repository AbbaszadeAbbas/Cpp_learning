#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n%2 != 0){
		cout<<"YES";
	}else if(n>0 && n/1000 != 0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
