#include <iostream> 
using namespace std ; 
int main()
{
    int n , x ; 
    const int max = 100 ;
    cout << " moi nhap so luong phan tu " ; cin >> n ; 
    int a[max] ; 
    x = n ; 
    for ( int i = 0 ; i < n ; ++i ) { cin >> a[i] ; } 
    for ( int i = 0 ; i < n ; ++i ) 
    { 
        if ( a[i] % 2 == 0 && a[i] > 0 ) 
        {
            for ( int z = i ; z < n   ; ++z ) 
            { 
               a[z] = a[z+1] ;
            }
            --n ; 
            break ;
        } 
        if ( n < x ) { break ; }
    }
    for ( int i = 0 ; i < n ; ++i ) { cout << a[i] << " " ; }
    return 0 ; 
}