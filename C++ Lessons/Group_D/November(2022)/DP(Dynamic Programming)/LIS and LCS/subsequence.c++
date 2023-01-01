#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int v[n],list[n];
	for(int i=0;i<n;i++){ cin>>v[i]; }
	list[0] = 1;
	for (int i = 1; i < n; i++) {
		list[i] = 1;
		for (int j = 0; j < i; j++){
			if (v[i] > v[j] && list[i] < list[j] + 1){
				list[i] = list[j] + 1;
			}
		}
	}
	cout<<*max_element(list, list + n);
}