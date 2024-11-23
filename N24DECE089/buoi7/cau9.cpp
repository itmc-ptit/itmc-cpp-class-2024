#include <iostream> 
using namespace std ; 
int fibonacci(int n)
{
    long long  a = 1 , i = 1 , cnt = 2 , b ;
    if ( n == 0 ) { return 0 ; }
    else if ( n == 1 || n == 2) { return 1 ;} 
    else if ( n > 2 )
    {
        for ( int z = 3 ; z <= n ; ++z)
        {
            b = a + i ;
            a = i ; 
            i = b ;
        }
    }
    return b ; 
}
int main()
{
    int n ; 
    cout << "moi nhap n " ; cin >> n ; 
    cout << "so fibonacci thu " << n << " la : " << fibonacci(n) ; 
    return 0 ; 
}