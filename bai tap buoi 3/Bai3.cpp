#include <iostream>
using namespace std ;
int main(){
    int a = 10 , b = 11 , k = 0 ;
    k = a ;
    a = b ;
    b = k ; 
    cout << a << " "<< b ; 
}