#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    vector<int> v(n+1);
    v[0] = 0;
    v[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        v[i] =v[i-2] + v[i-1];
    }
    return v[n];
}
int main()
{
    int a; cin >> a;
    cout << fibonacci(a);
    return 0;
}