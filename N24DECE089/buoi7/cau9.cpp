#include <iostream> 
using namespace std ; 
int fibonacci(int n)
{
    int a = 1 , i = 1 , cnt = 0 , b ;
    if ( n == 1 ) { return 1 ;} 
    else if ( n == 2 ) { return 1 ; }
    else if ( n > 2 )
    {
         while ( b > 0 ) 
         {
             b = a + i ;
             a = i ; 
             i = b ; 
             ++cnt ; 
             if ( cnt == (n - 2)  ) { break ; }
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