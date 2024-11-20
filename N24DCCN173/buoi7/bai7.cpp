#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string str)
{
    set<char> s;
    string a;
    for(int i = 0; i < str.size(); i++)
    {
        s.insert(str[i]);
    }
    for(auto it : s) a += it;
    return a;
}
int main()
{
    string s; cin >> s;
    cout << removeDuplicates(s);
    return 0;
}