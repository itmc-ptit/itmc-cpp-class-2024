#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin >> a >> b;
    int h[a][b];
    int q[a][b];
    for(int i = 0 ; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cin >>h[i][j];
        }
    }
    int m,n; cin >> m >> n;
    int g[m][n];
    for(int i = 0 ; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >>g[i][j];
        }
    }
    if(a == m && b == n)
    {
        cout << "Hai ma tran cung kich thuoc" << endl;
        for(int i = 0 ; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                q[i][j] = h[i][j]+g[i][j];
                cout << q[i][j] << " ";
            }
            cout << endl;
        }
    }
    else cout << "Hai ma trn=an khong cung kich thuoc" << endl;
    return 0;
}