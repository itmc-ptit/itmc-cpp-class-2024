#include <iostream>
#include <string>  
using namespace std ; 
int main()
{
    string a ;
    cout << "moi nhap chuoi " ; getline(cin,a) ;
    for ( int i = 0 ; i < a.size() ; ++i ) 
    {
        if ( a[i] == ' ' && a[i+1] == ' ') { a.erase(i,1) ; --i ;}
    }
    if ( a[0] == ' ' ) { a.erase(0,1) ; }
    if ( a[a.size()-1] == ' ' ) { a.erase(a.size()-1,1) ; }
    cout << a ; 
    return 0 ; 
}