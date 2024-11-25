#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;
        if(a==b && a==c && b==c) cout << "Day la tam giac deu" << endl;
        else if(a==b || a==c || b==c) cout << "Day la tam giac can" << endl;
        else if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b) cout << "Day la tam giac vuong" << endl;
        else cout << "Day la tam giac thuong" << endl;
    }
    return 0;
}