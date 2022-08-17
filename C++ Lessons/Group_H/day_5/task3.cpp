#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,total = 0;
	cin>>n;
	n = abs(n);
	while(n>0){
		total += n%10;
		n = n/10;
	}
	cout<<total;
}
