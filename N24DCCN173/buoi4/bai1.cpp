#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c; cin >> c;
    if(c >= 'a' && c <= 'z')
    {
        cout << "Day la ky tu thuong" << endl;
    }
    else if(c >= 'A' && c <= 'Z')
    {
        cout << "Day la ky tu hoa" << endl;
    }
    return 0;
}