#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin>>n;
	for(long long i = 1;i<n;i++){
		if(pow(i, 2)<n){
			long long result = pow(i, 2);
			cout<<result<<" ";
		}
	}
}
