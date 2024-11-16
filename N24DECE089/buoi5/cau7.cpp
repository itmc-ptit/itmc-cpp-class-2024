#include <iostream> 
using namespace std ; 
int main() 
{
    int a = 24 ;
    double b ; 
    cout << " BAT DAU TRO CHOI " << endl  ; 
    while(1) 
    {
        cout << " Moi ban nhap so " ; cin >> b ; 
        if ( b < a ) { cout << " Nho hon so voi so can doan " << endl ; }
        else if ( b > a ) { cout << " Lon hon so voi so can doan " << endl ; } 
        else if ( b == a ) { cout << " Ban da doan dung " ; break ; }
    }
    return 0 ; 
}