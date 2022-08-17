#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin>>n;
	long long array[n];
	for(int i = 0; i<n;i++){
		cin>>array[i];	
	}
	long long max_element = array[0];
	for(int i = 0; i<n;i++){
		while(max_element < array[i]){
			max_element = array[i];
		}
	}
	cout<<max_element;
}
