#include <iostream> 
using namespace std ; 
int main() 
{
  int n , i , k = 1  ; 
  cout << " moi nhap chieu cao " ; cin >> n ; 
  i = n ; 
  for ( int h = 1 ; h <= i  ; ++h )
  {
    for ( int j = 1 ; j <= ( n - 1 ) ; ++j ) { cout << " " ; }
    for ( int z = 1 ; z <= k ; ++z  ) {  cout << "*" ; } 
    --n ; 
    k += 2 ; 
    cout << endl ; 
  }
  for ( int g = 1 ; g <= ( i - 1 )  ; ++g ) { cout << " " ; } 
  cout << "*" ; 
  return 0 ; 
}
