#include <iostream>
#include <string>  
using namespace std ; 
int main()
{
    string a ;
    cout << "moi nhap chuoi " ; getline(cin,a) ;
    for ( int i = 0 ; i < a.size() ; ++i ) 
    {
        a[i] += 32 ; 
    }  
    cout << "chuyen chuoi thanh chu thuong : " <<  a ; 
    return 0 ; 
}