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
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(check(n)) cout << "Day la so nt" << endl;
        else cout << "Day ko phai la so nt" << endl;
    }
    return 0;
}