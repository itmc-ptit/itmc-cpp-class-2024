#include <iostream> 
using namespace std ; 
int main() 
{
  int m , n , i , k = 1  ; 
  cout << " moi nhap chieu cao " ; cin >> n ; 
  cout << " moi nhap so luong " ; cin >> m ; 
  i = n ; 
  for ( int h = 1 ; h <= i  ; ++h )
  {
     for ( int t = 1 ; t <= m ; ++t )  {
                                         for ( int j = 1 ; j <= ( n - 1 ) ; ++j ) { cout << " " ; }
                                         for ( int z = 1 ; z <= k ; ++z  ) {  cout << "*" ; }
                                         for ( int j = 1 ; j <= ( n - 1 ) ; ++j ) { cout << " " ; }
                                       } 
     --n ; 
     k += 2 ; 
     cout << endl ; 
  }
  for ( int t = 1 ; t <= m ; ++t )
  {
     for ( int g = 1 ; g <= ( i - 1 )  ; ++g ) { cout << " " ; } 
     cout << "*" ; 
     for ( int g = 1 ; g <= ( i - 1 )  ; ++g ) { cout << " " ; } 
  }
  return 0 ; 
}
