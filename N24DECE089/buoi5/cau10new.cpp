#include <iostream> 
#include <cmath>
using namespace std ; 
int main() 
{
    int n , cnt  ; 
    cout << " Moi nhap so muon phan tich : " ; cin >> n ; 
    if ( n >= 2 ) 
    {
         for ( int i = 2 ; i <= n  ; ++i ) 
     {
         cnt = 0 ;
         while ( n % i == 0 ) 
         {
            ++cnt ; 
            n/=i ; 
         }
         if ( cnt > 0 ) 
         {
            cout << i ; 
            if ( cnt > 1 ) { cout << "^" << cnt ; } 
            if ( n > 1 ) { cout << "x";} 
         }
        
     }
    }
    else { cout << " error! " ; }
    return 0 ; 
}