#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,helper;
	cin>>a;
	vector<long long>array;
	for(int i = 0;i<a;i++){
		cin>>helper;
		array.push_back(helper);
	}
	if(a%2!=0){
		for(int i = 0;i<a/2+1;i++){
			cout<<array[i]<<" ";
			if(i==a/2){
				return 0;
			}
			cout<<array[a-1-i]<<" ";
		}
	}
	if(a%2==0){
		for(int i = 0;i<a/2;i++){
			cout<<array[i]<<" ";
			cout<<array[a-1-i]<<" ";
		}
	}
}
