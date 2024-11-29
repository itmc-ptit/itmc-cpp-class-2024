#include <iostream>
#include <string>  
using namespace std ; 
int main()
{
    string a , b ; 
    cout << "moi nhap chuoi 1 " ; getline(cin,a) ; 
    cout << "moi nhap chuoi 2 " ; getline(cin,b) ; 
    if ( a == b ) { cout << "true " ; }
    else { cout << "false " ; } 
    return 0 ; 
}