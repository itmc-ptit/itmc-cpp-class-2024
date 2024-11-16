#include <iostream> 
using namespace std ; 
int main() 
{ 
    int i , k ; 
    cout << " Bang cuu chuong tu 1 den 9 " << endl ;  
    for ( int i = 1 ; i <= 9 ; ++i ) 
    {
        for ( int k = 1 ; k < 10 ; ++k ) { cout << i*k << " " ;} 
        cout << endl ; 
    }
    return 0 ; 
}