#include <iostream> 
using namespace std ; 
int main()
{
    char a ; 
    cout << " moi nhap a " ; cin >> a ; 
    if ( a >= 65 && a <= 90 ) { cout << " a la chu cai in hoa " ; } 
    else if ( a >= 97 && a <= 122 ) { cout << " a la chu cai in thuong " ; } 
    else { cout << " ERROR! " ; } 
    return 0 ; 
    
}