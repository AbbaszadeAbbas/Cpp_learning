#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int array[n];
	for(int i = 0;i<n;i++){
		cin>>array[i];
	}
	for(int j = n-1; j >= 0; j--){
		cout<<array[j]<<" ";
	}
}
