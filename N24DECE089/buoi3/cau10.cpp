#include <iostream>    
using namespace std ; 
int main() 
{
    char a , b ; 
    cout << " moi nhap a " ; cin >> a ; 
    cout << " moi nhap b " ; cin >> b ;  
    if (  ( a >= 65 && a <= 90 ) && ( b >= 65 && b <= 90 )  )  { a += 32 ; b += 32 ; cout << a << " " << b ;    }
    return 0 ; 
}