#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    if(n == 2 || n == 3) return true;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
int main()
{
    map<int, int> mp;
    int n; cin >> n;
    vector<int> vt;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if(check(i)) vt.push_back(i);
            if(n/i != i && check(n/i)) vt.push_back(n/i);
        }
    }
    for(int i = 0; i < vt.size(); i++)
    {
        while(n % vt[i] == 0)
        {
            mp[vt[i]]++;
            n /= vt[i];
        }
    }
    for(auto it : mp)
    {
        cout << it.first <<"^" << it.second << "*";
    }
}