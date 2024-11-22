#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp)
    {
        v.push_back(tmp);
    }
    for(int i = 0; i < v.size(); i++)
    {
        if(i != v.size()-1) cout << v[i] << ",";
        else cout << v[i];
    }
    return 0;
}