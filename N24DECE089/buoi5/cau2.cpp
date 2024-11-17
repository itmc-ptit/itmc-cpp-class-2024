#include <iostream> 
using namespace std ; 
int main() 
{ 
    int n , i , k ; 
    cout << " Moi nhap n " ; cin >> n ;
    cout << " Day la bang cuu chuong " << n << endl ; 
    for ( int i = 1 ; i < 10 ; ++ i ) 
    {
        cout << n << "x" << i << "=" << n*i << endl ;
    }
    return 0 ; 
}