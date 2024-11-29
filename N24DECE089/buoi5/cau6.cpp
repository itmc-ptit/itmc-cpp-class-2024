#include <iostream> 
using namespace std ; 
int main() 
{
    int n , sum = 0  ; 
    cout << " moi nhap n " ; cin >> n ; 
    for ( int i = 1 ; i <= n/2 ; ++i ) { if ( n % i == 0 )  { sum += i ; } } 
    if ( sum == n ) { cout << " Day la so hoan hao " ; } 
    else { cout << " Day khong phai la so hoan hao " ; }
    return 0 ; 
}