#include <bits/stdc++.h>
using namespace std;
int main() {
    long long x1,x2,x3,x4,y1,y2,y3,y4,counter = 0;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(x1 == x2 and y2 == y3)counter++;
    if(x3 == x4 and y2 == y3)counter++;
    if(x3 == x4 and y4 == y1)counter++;
    if(x1 == x2 and y4 == y1)counter++;
    cout<<counter;
}