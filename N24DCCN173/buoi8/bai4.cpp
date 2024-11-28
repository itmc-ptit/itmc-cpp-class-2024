#include <bits/stdc++.h>
using namespace std;

string lower1(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    return s;
}
int main()
{
    string a; cin >> a;
    cout << lower1(a);
}