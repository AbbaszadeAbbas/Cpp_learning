#include <bits/stdc++.h>
using namespace std;
int main() {
	int x,y;
	cin>>x>>y;
	int a[x][y],b[x][y],total[x][y];

	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cin>>a[i][j];
		}
	}
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cin>>b[i][j];
		}
	}

	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			if(j!=y-1){
				cout<<a[i][j]+b[i][j]<<" ";
			}else if(j==y-1){
				cout<<a[i][j]+b[i][j]<<endl;
			}
		}
	}
}