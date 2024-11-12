#include <iostream> 
using namespace std  ; 
int main() 
{
   double a , b  , x ; 
   cout << " ax + b = 0 " << endl  ; 
   cout << " moi nhap he so a va b  : " ; cin >> a >> b ; 
   if ( a != 0 && b != 0 ) { x = -b/a ; cout << x ; }
   else if ( a = 0 ) { cout << " ERROR! "; }
   else if ( b = 0 ) { x = 0 ; cout << x ; }
   return 0 ;
}