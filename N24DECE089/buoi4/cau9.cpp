#include <iostream> 
#include <cmath>
using namespace std ; 
int main () 
{
   float   a,b,c,delta,x1,x2,x ; 
   cout << " ax^2 + bx + c = 0 " << endl ; 
   cout << "moi nhap a , b ,c : " ; cin >> a >> b >> c  ; 
   if ( a == 0 && b != 0 && c != 0  ) { x = (-c)/b ; cout << "phuong trinh co nghiem  la : " << x ; }
   else if ( a == 0 && b == 0 && c == 0  ) { cout << " phuong trinh co vo so nghiem " ; }
   else if ( a == 0 && c == 0 ) { x = 0 ; cout << "phuong trinh co nghiem la : " << x ; }
   else if ( a == 0 && b == 0 ) { cout << " error " ; }
   else if ( a != 0 ) { delta = (b*b) - (4*a*c); 
                        if ( delta > 0 ) { x1 = (-b + sqrt(delta))/(2*a ); x2 = (-b - sqrt(delta))/(2*a ) ; cout << " phuong trinh co hai nghiem phan biet " << x1 << "va" << x2 ; }
                        else if (delta == 0 ) { x=x1=x2= -b/(2*a); cout << " phuong trinh co nghiem kep :  " << x ; } else { cout << " phuong trinhh vo nghiem "; } }
   return 0 ; 
} 