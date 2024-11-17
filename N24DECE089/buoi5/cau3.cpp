#include <iostream> 
using namespace std ; 
int main() 
{ 
    int i , k ; 
    cout << " Bang cuu chuong tu 1 den 9 " << endl ;  
    for ( int i = 1 ; i <= 9 ; ++i ) 
    {
       for ( int j = 1 ; j < 10 ; ++j ) 
       {
        cout << j << "x" << i << "=" << i*j  ;
        if ( i*j < 10 ) { cout << "      " ;}
        else if ( i*j >= 10 ) { cout << "     " ; }
       }
       cout << endl ;
    }
    return 0 ; 
}