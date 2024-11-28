#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string str)
{
    set<char> s;
    string a;
    for(int i = 0; i < str.size(); i++)
    {
        if(a.find(str[i]) == string::npos)
        {
            a += str[i];
        }
        else
        {
            continue;
        }
    }
    return a;
}
int main()
{
    string s; cin >> s;
    cout << removeDuplicates(s);
    return 0;
}