#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for(int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a,a+4);
    cout << a[3] << endl;
    return 0;
}