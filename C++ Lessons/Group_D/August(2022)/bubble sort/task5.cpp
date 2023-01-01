#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin>>n;
	string name[n];
	string surname[n];
	long long year[n];
	for(long long i = 0;i <n; i++){
		cin>>name[i]>>surname[i]>>year[i];
	}
	for(long long i = 0; i < n-1;i++){
		for(long long j = 0; j < n-1;j++){
			if(surname[j] > surname[j+1]){
				swap(name[j], name[j+1]);
				swap(surname[j], surname[j+1]);
				swap(year[j], year[j+1]);
			}else if(surname[j] == surname[j+1]&& name[j]>name[j+1]){
				swap(name[j], name[j+1]);
				swap(year[j], year[j+1]);
			}else if(surname[j] == surname[j+1] && name[j] == name[j+1]&&year[j] < year[j+1]){
					swap(year[j], year[j+1]);
			}
		}
	}
	for(long long i = 0;i < n; i++){
		cout<<name[i]<<" "<<surname[i]<<" "<<year[i]<<endl;
	}

}