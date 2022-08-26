#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m,total = 0;
	cin>>n>>m;
	int array1[n][m];
	int array2[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>array1[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>array2[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(array2[i][j]==1){
				total += array1[i][j];
			}
		}
	}
	cout<<total;
}