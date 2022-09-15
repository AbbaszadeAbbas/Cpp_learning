#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,helper;
	cin>>a;
	vector<long long>array;
	for(int i = 0;i<a;i++){
		cin>>helper;
		array.push_back(helper);
	}
	for(int i = 0;i<a;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	for(int i = a-1;i>=0;i--){
		cout<<array[i]<<" ";
	}
}
