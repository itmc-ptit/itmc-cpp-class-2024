#include <iostream> 
#include <string> 
using namespace std ; 
string removeDuplicates(string str) 
{
    for ( int i = 0 ; i < str.size()  ; ++i )
    {
       for ( int j = i + 1 ;  j < str.size() ; ++j ) 
       {
         if ( str[i] == str[j] ) { str.erase(j,1) ; --j ; } 
       }
    }
    return str;
}
int main() 
{
    string a ; 
    cout << " moi nhap chuoi " ; getline(cin,a) ;
    cout<< removeDuplicates(a) ;
    return 0 ; 
}