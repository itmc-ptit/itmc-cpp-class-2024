#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int dem1 = 0;
    int dem2 = 0;
    while(n >= 0)
    {
        cin >> n;
        if(n % 2 == 0) ++dem1;
        else ++dem2;
    }
    cout << "Co " << " " << dem1 << "so chan" << endl;;
    cout << "Co " << " " << dem2 << "so le" << endl;
    return 0;
}