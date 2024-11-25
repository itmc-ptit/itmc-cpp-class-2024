#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    int max = INT16_MIN;
    int min = INT16_MAX;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= max) max = a[i];
        if(a[i] <= min) min = a[i];
    }
    cout << max << endl;
    cout << min << endl;
}
