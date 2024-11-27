#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a;
    cin >> s;
    cin >> a;
    if(s.size() == a.size() && s == a) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}