#include <iostream> 
#include <string>
using namespace std ;
bool containsChar(string str, char a)
{
    for ( int i = 0 ; i < str.size() ; ++i )
    {
        if ( str[i] == a ) { return true ; }
    }
    return false ;
}
int main()
{
    char a ; 
    string b ; 
    cout << "moi nhap chuoi : " ; cin >> b ;
    cout << "moi nhap ky tu : " ; cin >> a ;
    if ( containsChar(b,a) == true )
    {
        cout << "trong chuoi co ky tu " << a ; 
    }
    else 
    {
        cout << "trong chuoi khong co ky tu " << a ; 
    }
    return 0 ; 
}