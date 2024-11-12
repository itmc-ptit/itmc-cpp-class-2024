#include <bits/stdc++.h>
using namespace std;
int main() {
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    int s,s1;
    if (a>b) s=a; else s=b;
    if (c>d) s1=c; else s1=d;
    if (s>s1) cout<<s; else cout<<s1;
    return 0;
}