#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string kq;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ' && s[i+1] != ' ' && !kq.empty()) kq += s[i];
        if(s[i] != ' ') kq += s[i];
    }
    cout << kq;
    return 0;
}