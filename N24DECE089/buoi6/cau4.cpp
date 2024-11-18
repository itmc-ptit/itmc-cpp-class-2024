#include <iostream> 
using namespace std ; 
int main() 
{
    int n , cnt = 0 , max = 0 , h , k  ; 
    cout << "moi nhap n " ; cin >> n ; 
    int a[n] ; 
    for ( int i = 0 ; i < n ; ++i ) { cin >> a[i] ; }
    for ( h = 0 ; h < n ; ++h ) 
    {
        cnt = 0 ; 
        for ( int j = 0 ; j < n ; ++j ) 
        {
            if ( a[h] == a[j] ) { ++cnt ; }
        }
        if ( cnt > max ) { max = cnt ; k = a[h] ;   }
    }
    cout << "phan tu xuat hien nhieu nhat la " << k ; 
    cout << endl << "tan suat xuat hien la " << max << " lan " ; 
}