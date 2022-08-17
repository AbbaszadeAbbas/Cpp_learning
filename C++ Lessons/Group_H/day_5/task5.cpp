#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	double array[n];
	for(int i = 0; i<n;i++){
		cin>>array[i];
	}
	double total = 0;
	for(int i = 0;i<n;i++){
		total += array[i];
	}
	cout.precision(1);
	cout<<fixed<<total;
}
