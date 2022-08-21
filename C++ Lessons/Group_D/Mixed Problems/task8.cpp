#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin>>n;
	long long array[9];
	for(int i = 1; i<10; i++){
		array[i] = n + i;
	}
	for(int j = 0; j < 10; j++){
		if(array[j]%7 == 0){
			cout<<array[j];
			break;
		}
	}
}
