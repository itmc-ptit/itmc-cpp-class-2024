#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    cout << "Ma tran cap a[ij] (hang i cot j)\n";
    cout << "Hang i: "; int n; cin >> n;
    cout << "Cot j: "; int m; cin >> m;   
    int a[n][m];
    int c[n][m];
    cout << "Ma tran cap b[ij] (hang i cot j)\n";
    cout << "Hang i: "; int p; cin >> p;
    cout << "Cot j: "; int q; cin >> q;
    int b[p][q];

    if(n==p && m==q)
    {
        cout <<"nhap ma tran a: ";
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin >> a[i][j];
            }
        }
        cout <<"nhap ma tran b: ";
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin >> b[i][j];
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    cout << "\n";
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout <<"\n";
    }
    cout <<"\n";
    cout <<"\n";
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout <<"\n";
    }
    cout <<"\n";
    cout <<"\n";
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout << c[i][j] << " ";
        }
        cout <<"\n";
    }
    cout <<"\n";
    cout <<"\n";
} 
