#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int first = n/100;
	int second = n/10%10;
	int third = n %10;
	if(third != 0){
		cout<<third<<second<<first;
	}
	if(third == 0){
		if(second == 0){
			cout<<first;
		}else{
			cout<<second<<first;
		}
	}
}
