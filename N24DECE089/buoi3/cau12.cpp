#include <iostream> 
using namespace std ; 
int main() 
{
    int a ; 
    cout << " moi nhap a " ; cin >> a ; 
    char b = a ; 
    if ( a <= 255 && a >= 0 ) { cout << b ; } else { cout << " ERROR! " ; }
    return 0 ; 
}