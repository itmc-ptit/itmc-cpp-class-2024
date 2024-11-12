#include <iostream> 
#include <cmath> 
using namespace std ; 
int main() 
{
    int  a ; 
    cout << " moi nhap a : " ; cin >> a ; 
    double  b = sqrt(a) ; 
    double c = round(b) ; 
    if ( a > 0 ) 
    {
        if ( ( b - c == 0 )) { cout << " a la so chinh phuong " ; } else { cout << " a khong phai la so chinh phuong " ; }
    }
    else { cout << " a khong phai la so chinh phuong " ; }
    return 0 ; 
}