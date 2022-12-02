#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n<=1){
        cout << "NO";
        return 0;
    }
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int i=0;
    int len=0;
    string result="";
    for (int c : a){
        if (i%2==0){
            i++;
        } else {
            len++;
            result+=to_string(c)+" ";
            i++;
        }
    }
    cout << len << endl;
    cout << result;
}