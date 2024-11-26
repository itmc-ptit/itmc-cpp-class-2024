#include <bits/stdc++.h>
using namespace std;
int findmin(int n, int a[])
{
    int tmp = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= tmp) tmp = a[i];
    }
    return tmp;
}
int main()
{
    int m; cin >> m; 
    int a[m];
    for(int i = 0; i < m; i++) cin >> a[i];
    cout << findmin(m, a);
}