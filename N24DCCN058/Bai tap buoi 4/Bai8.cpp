#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    float a , b , c;
    cin >> a >> b >> c ;
    if (abs(a-b) > c || abs(b-c) > a ){
        cout << "None" ;
        return 0 ; 
    }else{
        if (a == b || b == c || c == a){
            cout << "Tam giac can";
        }else if ( a == b && b == c){
            cout << "Tam giac deu";
        }else if (b*b + a*b == c*b || c*c + b*b == a*a || a*a + c*c == b*b){
            cout << "Tam giac vuong";
        }else{
            cout << "Tam giac thuong";
        }
    }
    return 0 ; 
}