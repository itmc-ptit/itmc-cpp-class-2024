#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    char c; cin >> c;
    if(s.find(c) == string :: npos)
    {
        cout << "-1";
    }
    else cout << s.find(c) << endl;
    return 0;
}