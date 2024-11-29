#include <iostream>
#include <string>  
using namespace std ; 
int main()
{
    string a ;
    char b ; 
    int cnt = 0 ;
    cout << "moi nhap chuoi " ; getline(cin,a) ;
    cout << "moi nhap ki tu " ; cin >> b ; 
    for ( int i = 0 ; i < a.size() ; ++i ) 
    {  
         
        if ( a[i] == b ) { 
                            ++cnt ; 
                            if ( cnt == 1 ) { cout << "vi tri dau tien cua ki tu " << b << " trong chuoi la : " << i ; }     
                         }   
    }   
    if ( cnt == 0 ) { cout << -1 ;}
    return 0 ; 
}