#include <iostream> 
using namespace std ; 
int main() 
{
    int a , b ; 
    cout << " moi nhap a " ; cin >> a ;
    cout << " moi nhap b " ; cin >> b ;
    a = a + b ; 
    b = a - b ; 
    a = a - b ; 
    cout << " a la " << a ; 
    cout << " b la " << b ;
    return 0 ; 
}