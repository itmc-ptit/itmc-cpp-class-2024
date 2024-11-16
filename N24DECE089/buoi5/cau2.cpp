#include <iostream> 
using namespace std ; 
int main() 
{ 
    int n , i , k ; 
    cout << " Moi nhap n " ; cin >> n ;
    cout << " Day la bang cuu chuong " << n << endl ; 
    for ( int i = 1 ; i <= n ; ++i ) 
    {
        for ( int k = 1 ; k < 10 ; ++k ) { cout << i*k << " " ;} 
        cout << endl ; 
    }
    return 0 ; 
}