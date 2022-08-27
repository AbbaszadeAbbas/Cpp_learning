#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin>>n;
	for(int i = 1;i<100;i++){
		int sum = n + i;
		if(sum%7==0){
			cout<<sum;
			return 0;
		}
	}
}
