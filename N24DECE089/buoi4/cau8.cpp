#include <iostream> 
#include <cmath> 
using namespace std  ; 
int main() 
{
   double a , b , c ;
   cout << " moi nhap ba canh a , b , c cua tam giac  " ; cin >> a >> b >> c ;
   if ( a + b > c && a + c > b && b + c > a ) 
   {
      if ( ( a == b ) && ( b == c ) ) { cout << " day la tam giac deu "; }
      else if ( a == b || b == c || a == c ) { cout << " day la tam giac can " ; }
      else if ( ( pow(a,2) == pow(b,2) + pow(c,2) ) || ( pow(b,2) == pow(a,2) + pow(c,2) )|| ( pow(c,2) == pow(b,2) + pow(a,2) ) ) { cout << " day la tam giac vuong " ; }   
      else { cout << " day la mot tam giac thuong " ; }
   }
   else { cout << " day khong phai la mot tam giac " ; }
   return 0 ; 
}