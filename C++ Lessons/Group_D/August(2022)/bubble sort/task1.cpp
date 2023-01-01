#include <bits/stdc++.h>
using namespace std;
void bubbleSort(long long a[], long long n) {
	for(long long i = 0; i < n - 1; i++){
		for(long long j = 0; j < n - 1; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}
}

int main() {
	long long n;
	cin>>n;
	long long  a[n];
	for(long long i = 0; i < n; i++){
		cin>>a[i];
	}
	bubbleSort(a, n);
	for(long long i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
}
