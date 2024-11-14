#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int n ;
    cin >> n ;
    for (int i = 2 ; i < sqrt(n) ; i++){
         if ( n%i == 0){
            cout << n << " khong phai la mot so nguyen to" ;
            return 0 ;
         }
    }
    n != 1 ? cout << n << " la mot so nguyen to" : cout << "1 khong phai la so nguyen to" ;
    return 0;
}
