#include <iostream> 
using namespace std ; 
int main() 
{
    int n , m , x , y ; 
    cout << " moi nhap index cua hai mang  : " ; cin >> n >> m >> x >> y ; 
    int a[100][100] , b[100][100] , c[100][100];
    for ( int i = 0 ; i < n ; ++i )
    {
        for ( int j = 0 ; j < m ; ++j ) 
        {
            cin >> a[i][j] ; 
        }
    } 
    for ( int i = 0 ; i < x ; ++i ) 
    {
        for ( int j = 0 ; j < y ; ++j )
        {
            cin >> b[i][j] ;
        }
    }
    if ( n == x && m == y ) 
    {
        cout << " hai ma tran nay bang nhau " << endl ;
        for ( int i = 0 ; i < n ; ++i)
        {
            for ( int j = 0 ; j < m ; ++j )
            {
                c[i][j] = a[i][j] + b[i][j] ; 
            }
        }
        for ( int i = 0 ; i < n ; ++i) 
        {
            for ( int j = 0 ; j < m ; ++j ) 
            {
                cout << c[i][j] << " " ;
            }
            cout << endl ; 
        }
    }
    else { cout << " hai ma nay khong bang nhau " ; }
    return 0 ;
}