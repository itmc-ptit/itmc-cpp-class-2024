#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int ngang = 2*n - 1;
    int c = 0;
    int b = 0;
    for(int i = 0; i < n+1; i++)
    {
        for(int h = 0; h <= ngang/2 - 1 - b; h++) cout << " ";
        ++b;
        for(int j = ngang/2 - c; j <= ngang/2 + c; j++)
        {
            cout << "*";
        }
        ++c;
        cout << endl;
        if(i+1 == n)
        {
            c = 0;
            b = 0;
        }
    }
    return 0;
}
//5 9
//6 11
//7 13