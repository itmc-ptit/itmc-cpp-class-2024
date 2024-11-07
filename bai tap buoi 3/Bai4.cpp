#include <iostream>
using namespace std ;
int main(){
    int a = 10 , b = 11 ;
    b -= a ; 
    a += b ; 
    b = a - b ; 
    cout << a << " " << b ; 
}