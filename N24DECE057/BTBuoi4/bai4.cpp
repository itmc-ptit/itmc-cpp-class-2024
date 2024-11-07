#include <bits/stdc++.h>
using namespace std;
int main() {
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    float s = max(a,max(b,max(c,d)));
    cout<<s;
    return 0;
}