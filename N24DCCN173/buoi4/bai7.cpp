#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b; cin >> a >> b;
    if(a == 0) cout << "Phuong trinh vo nghiem" << endl;
    else if(b == 0) cout << "Phuong trinh co nghiem x = 0" << endl;
    else cout << -b/a << endl;
    return 0;
}