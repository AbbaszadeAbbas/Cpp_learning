#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    int b[a], d, c = 0, e = 0, f, z = 0;
    for (int i = 0; i < a; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < a; i++) {
        d = i;
        f = b[i];
        e = 0;
        for (int i = 0; i < a; i++) {
            if (f == b[i]) {
                e++;
            }
        }
        if (e >= c) {
            c = e;
        }
    }
    cout << c << endl;
    for (int i = 0; i < a; i++) {
        d = i;
        f = b[i];
        e = 0;
        z = 0;
        for (int i = 0; i < a; i++) {
            if (f == b[i]) {
                e++;
            }
        }
        if (e > 1) {
            for (int i = d + 1; i < a; i++) {
                if (f == b[i]) {
                    z++;
                }
            }
        }
        if (e == c && z == 0) {
            cout << b[i] << " ";
        }
    }
    return 0;
}