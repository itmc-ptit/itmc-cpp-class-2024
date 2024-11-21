#include <iostream> 
#include <string> 
using namespace std ; 
string removeDuplicates(string str) 
{
    for ( int i = 0 ; i < str.size() - 1 ; ++i )
    {
        if ( str[i+1] == str[i] ) { str.erase(i+1,1) ; --i ; }
    }
    cout << str ; 
}
int main() 
{
    string a ; 
    cout << " moi nhap chuoi " ; getline(cin,a) ;
    removeDuplicates(a) ;
    return 0 ; 
}