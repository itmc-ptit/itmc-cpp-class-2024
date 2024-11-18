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
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            for(int j = i; j < n; j++)
            {
                a[j] = a[j+1];
            }
            --n;
            break;
        }
    }
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}