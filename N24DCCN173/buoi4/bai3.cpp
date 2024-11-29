#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    for(int i = 0; i <= n/2; i++)
    {
        if(n == i*i)
        {
            cout << "Day la so chinh phuong" << endl;
            return 0;
        }
        else continue;
    }
    cout << "Day khong phai la so chinh phuong" << endl;
    return 0;
}