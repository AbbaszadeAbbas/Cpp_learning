#include <bits/stdc++.h>
using namespace std;

int main()
{
   	int n;
   	cin>>n;
   	int a[n], dp[n], max_len = 1, idx = 0;
   	int p[n];
   	for(int i = 0; i < n; i++){
        cin>>a[i];
   	}


   	for(int i = 0; i < n; i++){
        dp[i] = 1;
        p[i] = i;
        for(int j = 0; j < i; j++){
            if(a[i] > a[j] and dp[j] + 1 > dp[i]){
                dp[i] = dp[j] + 1;
                p[i] = j;
            }
        }
        if(max_len < dp[i]){
            max_len = dp[i];
            idx = i;
        }
   	}
   	int last = idx;
   	vector<int>path;
   	path.push_back(a[last]);
   	while(p[idx] != idx){
        idx = p[idx];
        path.push_back(a[idx]);
   	}
   	reverse(path.begin(), path.end());
   	cout<<max_len<<endl;
   	for(int i = 0; i < path.size(); i++){
        cout<<path[i]<<" ";
   	}
}