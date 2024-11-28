#include <bits/stdc++.h>
using namespace std;
bool containsChar(string str, char c)
{
    for(int i = 0; i < str.size(); i++)
    {

        if(str[i] == c) return true;
    }
    return false;
}
int main()
{
    string s; cin >> s;
    char a; cin >> a;
    if(containsChar(s,a)) cout << "True";
    else cout << "False";
    return 0;
}