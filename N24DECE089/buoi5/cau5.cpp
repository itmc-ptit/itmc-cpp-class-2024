#include <iostream>
#include <cmath>
using namespace std ;
bool nt(int n) 
{
    for ( int i = 2 ; i <= sqrt(n)  ; ++i ) { if ( n % i == 0 )  { return false ; }  }   
    return true ; 
}
 int main () 
 {
    int n ; 
    cout << " moi nhap n " ; cin >> n ; 
     for ( int z = 2 ; z < n ; ++z  ) { if ( nt(z) == true ) { cout << z << endl ;} }        
     return 0 ; 
 }