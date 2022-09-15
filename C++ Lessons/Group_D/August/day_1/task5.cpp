#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x,y;
	cin>>n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	}
	cin>>x>>y;
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			if(j != y-1){
				cout<<a[i][j]<<" ";
			}else if(j == y-1){
				cout<<a[i][j]<<endl;
			}
		}
	}
}