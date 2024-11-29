#include <iostream>
#include <string>  
using namespace std ; 
int main()
{
    string a , b ; 
    cout << " moi nhap chuoi " ; getline(cin,a) ;
    for ( int i = a.size() - 1  ; i >= 0  ; --i )  
    {
        b += a[i] ; 
    }
    a = b ;
    cout << a ; 
    return 0 ; 
}