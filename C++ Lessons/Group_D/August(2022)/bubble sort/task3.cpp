#include <bits/stdc++.h>
using namespace std;
void bubbleSort(long long id[],long long score[], long long n) {
	for(long long i = 0; i < n - 1; i++){
		for(long long j = 0; j < n - 1; j++){
			if(score[j] < score[j+1]){
				swap(id[j], id[j+1]);
				swap(score[j], score[j+1]);
			}else if(score[j] == score[j+1]){
				if(id[j] > id[j+1]){
					swap(id[j], id[j+1]);
				}
			}
		}
	}
}

int main() {
	long long n;
	cin>>n;
	long long id[n],score[n];
	for(long long i = 0; i < n; i++){
		cin>>id[i]>>score[i];
	}
	bubbleSort(id, score, n);
	for(long long i = 0; i < n;i++){
		cout<<id[i]<<" "<<score[i]<<endl;
	}
}
