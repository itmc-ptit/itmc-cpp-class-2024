#include <iostream>
#include <string>  
using namespace std ; 
int main()
{
    string a , b  ;
    cout << "moi nhap chuoi " ; getline(cin,a) ; 
    for ( int i = 0 ; i < a.size() ; ++i ) 
    {
        if ( a[i] == ' ' && a[i+1] == ' ') { a.erase(i,1) ; --i ;}
    }
    if ( a[0] == ' ' ) { a.erase(0,1) ; }
    if ( a[a.size()-1] == ' ' ) { a.erase(a.size()-1,1) ; }
    cout << '[' ; 
    for ( int i = 0 ; i < a.size() ; ++i ) 
    { 
        if ( a[i] != ' ') { b += a[i]; }
        if ( a[i] == ' ') { cout << '"' << b << '"' << ',' ; b = "" ; }
        if ( i == a.size() - 1 ) { cout << '"' << b << '"' ; }
    }
    cout << ']' ; 
    return 0 ; 
}