#include <bits/stdc++.h>
#define MAX 200001
using namespace std;
long long sum[MAX+1];
vector<int> phi(MAX+1);
void phi_1_to_n() {
    for (int i = 0; i <= MAX; i++)
        phi[i] = i;

    for (int i = 2; i <= MAX; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= MAX; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}
int gcdSum(int n){
    int s = sqrt(n);
    int sum = 0;
    for(int i = 1; i <= s; i++){
        if(n%i == 0){
            sum += phi[n/i]*i;
            if(i != n/i){
                sum += phi[i]*n/i;
            }
        }
    }
    return sum - n;
}
int main()
{

    phi_1_to_n();
    for(int i = 2; i <= 200000; i++){
            sum[i] = sum[i-1] + gcdSum(i);
    }
    int n;
    while(cin>>n && n != 0){
        cout<<sum[n]<<endl;
    }
}