#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;
        int x1, x2;
        if(a == 0 && b == 0) cout << "Pt vo nghiem";
        else if( a == 0 && b != 0) cout << "Phuong trinh co nghiem: " << -c/b << endl;
        else
        {
            float dt = b*b - 4*a*c;
            if(dt > 0)
            {
                x1 = (-b-sqrt(dt))/(2*a);
                x2 = (-b+sqrt(dt))/(2*a);
                cout << x1 <<" " << x2;
            }
            else if(dt == 0)
            {
                cout << "Phuong trinh co ngiem kep la: " << -b/(2*a);
            }
            else cout <<"Pt vo ngiem";
        }
    }
    return 0;
}