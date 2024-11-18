#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    int tmp;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] % 2 != 0)
        {
            ++n;
            for(int j = n -1 ; j > i; j--)
            {
                a[j] = a[j-1];
            }
            a[i+1] = 13;
            break;
        }
    }
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}