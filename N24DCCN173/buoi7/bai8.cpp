#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
    string s = to_string(n);
    int dem = 0;
    for(int i = 0; i < s.size()/2; i++)
    {
        if(s[i] == s[s.size()-i-1]) ++dem;
    }
    if(dem == s.size()/2) return true;
    else return false;
}
int main()
{
    int n; cin >> n;
    if(isPalindrome(n)) cout << "True";
    else cout << "False";
    return 0;
}