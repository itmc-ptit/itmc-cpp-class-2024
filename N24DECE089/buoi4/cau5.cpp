#include <iostream> 
using namespace std  ; 
int main() 
{
    double a , b ; 
    cout << " moi nhap so1 va so2 " ; cin >> a >> b ; 
    if( ( a - b ) > 0 ) { b = a ;} 
    cout << " moi nhap so3 " ; cin >> a ; 
    if ( ( a - b ) > 0 ) { b = a ; } 
    cout << " moi nhap so4 " ; cin >> a ; 
    if ( ( a - b ) > 0 ) { b = a ; } 
    cout << " so lon nhat la "  << b ; 
    return 0 ; 
}