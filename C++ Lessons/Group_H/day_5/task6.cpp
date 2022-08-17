#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n,say = 0;
	cin>>n;
	for(int i = 1;i<=n;i++){
		if(n%i==0){
			if(i%2==0){
				say += 1;
			}
		}
	}
	cout<<say;
}
