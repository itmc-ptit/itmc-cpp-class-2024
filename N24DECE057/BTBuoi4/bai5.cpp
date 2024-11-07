#include <bits/stdc++.h>
using namespace std;
int main() {
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    a=((a+b)+abs(a-b))/2;
    b=((c+d)+abs(c-d))/2;
    if (a>b) cout<<a; else cout<<b;
    return 0;
}