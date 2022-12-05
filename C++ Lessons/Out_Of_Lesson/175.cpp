#include <bits/stdc++.h>

using namespace std;
int main() {
    vector < int > v, vv, c;
    int n, cnt = 0, maxx = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        vv.push_back(a[i]);
    }
    for (int i = 0; i < n; i++) {
        int m = count(vv.begin(), vv.end(), vv[i]);
        v.push_back(m);
    }
    int l = v.size();
    sort(v.begin(), v.end());
    cout << v[l - 1] << endl;
    set < int > s;
    for (int i = 0; i < n; i++) {
        int m = count(vv.begin(), vv.end(), vv[i]);
        if (m == v[l - 1] and count(c.begin(), c.end(), vv[i]) == 0) c.push_back(vv[i]);
    }
    for (auto i = 0; i < c.size(); i++) cout << c[i] << " ";
    return 0;
}