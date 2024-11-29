#include <iostream>
#include <string>  
using namespace std ; 
int main()
{
    string a ; 
    cout << "moi nhap chuoi " ; getline(cin,a) ; 
    cout << "do dai cua chuoi la : " <<  a.size() ; 
    return 0 ; 
}