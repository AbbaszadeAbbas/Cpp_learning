#include <bits/stdc++.h>
using namespace std;
int evklid(long long x1,long long x2,long long y1,long long y2){
    return sqrt( (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1) );
}
int main(){
    long long n,counter;
    cin>>n;
    long long x[n],y[n],r[n];
    for(long long i = 0;i<n;i++){
        cin>>x[i]>>y[i]>>r[i];
    }
    for(long long i = 0;i<n;i++){
            counter = 0;
            for(long long j = 0;j<n;j++){
                if(i!=j){
                    if(evklid(x[i],x[j],y[i],y[j])<r[i]+r[j]){
                        counter++;
                    }
                }
            }
            cout<<counter<<endl;
    }

}
