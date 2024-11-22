#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a;
    cin >> s;
    cin >> a;
    bool check;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != a[i])
        {
            check = false;
            break;
        }
        else check = true;
    }
    if(check) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}