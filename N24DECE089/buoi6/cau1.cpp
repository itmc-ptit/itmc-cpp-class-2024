#include <iostream> 
using namespace std ; 
int main() 
{
    int n , sum = 0  , p = 1 , tb = 0  ; 
    cout << " moi nhap n " ; cin >> n ; 
    int a[n] ; 
    for ( int i = 0 ; i < n ; ++i ) 
    {
        cin >> a[i] ; 
    }
    for ( int i = 0 ; i < n ; ++i ) 
    {
        sum += a[i] ; 
    }
    cout << "tong la :" <<  sum ; 
    for ( int i = 0 ; i < n ; ++i ) 
    {
        p *= a[i] ; 
    }
    cout << endl << "tich la :" <<  p ; 
    for ( int i = 0 ; i < n ; ++i )
    {
        tb += a[i] ; 
    }
    tb /= n ;
    cout << endl << "gia tri trung binh cua mang la :" << tb ;
    return 0 ; 
}