#include <iostream> 
using namespace std ;
bool isPerfectNumber(int n) 
{
    int sum = 0 ; 
    for ( int i = 1 ; i <= n/2 ; ++i ) 
    {
        if ( n % i == 0 ) { sum += i ; }
    }  
    if ( sum == n ) { return true ; } 
    else { return false ; }
}
int main() 
{
    int a ;
    cout << " moi nhap so " ; cin >> a ; 
    if ( a > 0 ) 
    {
        if ( isPerfectNumber(a) == true  ) 
        {
            cout << " Day la so hoan hao  " ; 
        }
        else 
        {
            cout << " Day khong phai la so hoan hao " ; 
        }
    }
    else { cout << " ERROR! " ; }
    return 0 ; 
    
}