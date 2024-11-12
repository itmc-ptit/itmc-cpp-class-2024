#include <iostream> 
#include <cmath> 
using namespace std  ; 
int main() 
{
   double a , b , c ;
   cout << " moi nhap ba canh a , b , c cua tam giac  " ; cin >> a >> b >> c ;
   if ( a == b || b == c || a == c ) { cout << " day la tam giac can " ; }
   else if ( a == b == c ) { cout << " day la tam giac deu "; }
   else if ( ( pow(a,2) == pow(b,2) + pow(c,2) ) || ( pow(b,2) == pow(a,2) + pow(c,2) )|| ( pow(c,2) == pow(b,2) + pow(a,2) ) ) { cout << " day la tam giac vuong " ; } 
   else if ( a == 0 || b == 0 || c == 0 || a + b < c || b + c < a || a + c < b  ) { cout << " day khong phai la mot tam giac " ; } 
   else { cout << " day la mot tam giac thuong " ; } 
   return 0 ; 
}