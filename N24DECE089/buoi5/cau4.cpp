#include <iostream>
#include <cmath>
using namespace std ;
 int main () 
 {
    int n ; 
    cout << " moi nhap n " ; cin >> n ; 
    if ( n > 1 ) 
    {
        for ( int i = 2 ; i <= sqrt(n)  ; ++i ) { if ( n % i == 0 ) { cout << " day khong phai la so nguyen to " ; return 0 ; } }
        cout << " day la so nguyen to " ;                                           
    }
    else { cout << " ERROR! " ; }
    return 0 ; 
 }