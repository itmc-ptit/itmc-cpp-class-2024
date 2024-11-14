#include <iostream> 
using namespace std  ; 
int main() 
{
   int a ; 
   cout << " moi nhap nam  " ; cin >> a ; 
   if( ( a % 4 == 0 && a % 100 != 0 ) || ( a % 4 == 0 && a % 100 == 0 && a % 400 == 0 ) ) { cout << " day la nam nhuan " ; }
   else { cout << " day khong phai la nam nhuan " ; }
   return 0 ; 
}