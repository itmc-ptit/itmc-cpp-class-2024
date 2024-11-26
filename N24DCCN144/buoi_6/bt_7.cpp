#include <iostream>

using namespace std;


int main()
{
    int m = 0;
    int n = 0;

    cout << "nhap vao so dong va cot cua hai ma tran (cach nhau mot khong trong): ";
    cin >> m >> n;

    double a[m][n];
    for ( int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a" << "[" << i << "]" << "[" << j << "]" << " = "; 
            cin >> a[i][j];
        }
        
    } 

    double b[m][n];
    for ( int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "b" << "[" << i << "]" << "[" << j << "]" << " = "; 
            cin >> b[i][j];
        }
        
    } 

    for ( int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << "\n";
    } 
}
