#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, char> > v;
    int n, a, b, say = 0, max_customer = 1;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>a>>b;
        v.push_back(make_pair(a, 'a'));
        v.push_back(make_pair(b, 'b'));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        if(v[i].second == 'a'){
            say++;
        }
        else{
            say--;
        }
        max_customer = max(say, max_customer);
    }
    cout<<max_customer<<endl;
}