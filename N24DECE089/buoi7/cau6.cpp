#include <iostream> 
#include <string>
using namespace std ;
int countWords(string str) 
{
    int sum = 0 ; 
    for ( int i = 0 ; i < str.size() ; ++i )
    {
        if ( str[i] == ' ' ) { if ( str[i+1] != ' ') { sum ++ ;} } 
    }
    return sum ; 
} 
int main()
{
    string a ; 
    cout << "moi nhap chuoi : " ; getline(cin,a) ;
    countWords(a) ;
    cout << "so luong tu la : " << countWords(a) ;
    return 0 ; 
}