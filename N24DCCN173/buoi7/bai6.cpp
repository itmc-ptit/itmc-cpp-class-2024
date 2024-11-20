#include <bits/stdc++.h>
using namespace std;
int countWords(string str)
{
    int dem = 0;
    stringstream ss(str);
    string tmp;
    while(ss >> tmp)
    {
        ++dem;
    }
    return dem;
}
int main()
{
    string s;
    getline(cin, s);
    cout << countWords(s);
    return 0;
}