#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    float sum = 0;
    int tich = 1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        tich *= a[i];
    }
    float abs = sum/float(n);
    cout << sum << " " << tich <<" "<< abs << endl;
}