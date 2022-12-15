#include <bits/stdc++.h>
using namespace std;
int main() {
    long long b1, b2, b3,m1, m2, m3,t1, t2,B,M,T;
    cin>>b1>>b2>>b3;
    cin>>m1>>m2>>m3;
    cin>>t1>>t2;
    B = b1+b2+b3;
    M = m1+m2+m3;
    T = t1+t2;
    if((B == M and M == T) or (B == M and T>B) or (B == T and M>B) or (B<T and B<M)){
        cout<<"Bus";
    }else if((M == T and B>M) or(M == B and T>M) or (M<T and M<B)){
        cout<<"Metro";
    }else if(T<M and T<B){
        cout<<"Taxi";
    }
}