#include <iostream> 
using namespace std ; 
int main()
{
    int n , x ; 
    const int max = 100 ;
    cout << " moi nhap so luong phan tu " ; cin >> n ; 
    int a[max] ; 
    x = n ; 
    for ( int m = 0 ; m < n ; ++m ) { cin >> a[m] ; } 
    for ( int i = n - 1  ; 0 <= i  ; --i ) 
    {  
        if ( a[i] % 2 != 0 && a[i] > 0 ) 
        {
          for ( int z = n  ; z >= (i + 2)   ; --z ) 
          {
            a[z] = a[z-1]; 
          } 
          ++n ; 
          a[i+1] = 13 ;
        } 
        if ( n > x ) { break ; }
    } 
    for ( int i = 0 ; i < n ; ++i ) { cout << a[i] << " " ; }
    return 0 ; 
}