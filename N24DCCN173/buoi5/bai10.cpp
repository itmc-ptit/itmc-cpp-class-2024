#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    if(n == 2 || n == 3) return true;
    if(n <= 1) return false;
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
    int cnt = n;
    vector<int> vt;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if(check(i))
            {
                while(cnt % i == 0)
                {
                    vt.push_back(i);
                    cnt /= i;
                }
            }
            if(n/i != i && check(n/i))
            {
                while(n % vt[i] == 0)
                {
                    vt.push_back(i);
                    cnt /= i;
                }
            }
        }
    }
    int dem = 1;
    for(int i = 0; i < vt.size(); i++)
    {
        if(vt[i] != vt[i+1] && dem == 1)
        {
            if(i == vt.size() - 1) cout << vt[i];
            else cout << vt[i] << "x";
        }
        else if(vt[i] != vt[i+1] && dem != 1)
        {
            if(i == vt.size() - 1) cout << vt[i] << "^" << dem;
            else cout << vt[i] << "^" << dem << "x";
            dem = 1;
        }
        else ++dem;
    }
    return 0;
}