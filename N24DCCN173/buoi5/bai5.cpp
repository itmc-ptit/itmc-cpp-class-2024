#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    if(n == 2 || n == 3)
    {
        return true;
    }
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n %i == 0) return false;
    }
    return true;
}
int main()
{
    int n; cin >> n;
    for(int i = 2; i <= n; i++)
    {
        if(check(i)) cout << i << " ";
    }
    return 0;
}