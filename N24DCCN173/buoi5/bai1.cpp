#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int dem1 = 0;
    int dem2 = 0;
    if(n > 0)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0) ++dem1;
            else ++dem2;
        }
    }
    else return 0;
    cout << "Co " << dem1 << "so chan" << endl;
    cout << "Co " << dem2 << "so le" << endl;
    return 0;
}