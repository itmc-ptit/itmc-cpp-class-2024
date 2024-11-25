#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i = 2; i <= 9; i++)
    {
        cout << i << endl;
        for(int j = 0; j <= 10; j++)
        {
            cout << i << "x" << j << "=" << i*j << endl;;
        }
        cout << endl;
    }
}