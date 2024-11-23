#include <iostream>
#include <string>  
using namespace std ; 
int main()
{
    string a , b  ;
    cout << "moi nhap chuoi " ; getline(cin,a) ;
    int c = a.size() ; 
    for ( int i = 0 ; i < a.size() ; ++i ) 
    { 
        if ( a[i] != ' ') { b += a[i]; }
        if ( a[i] == ' ') { cout << b << endl ; b = "" ; }
        if ( i == c - 1 ) { cout << b ; }
    }
    return 0 ; 
}