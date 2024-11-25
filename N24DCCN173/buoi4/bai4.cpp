#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    int res = 0;
    if(res <= a) res = a;
    if(res <= b) res = b;
    if(res <= c) res = c;
    if(res <= d) res = d;
    cout << res;
    return 0;
}