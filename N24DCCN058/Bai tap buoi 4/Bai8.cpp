#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    float a , b , c;
    cin >> a >> b >> c ;
    if (abs(a-b) >= c || abs(b-c) >= a ){
        cout << "None" ;
    }else{
        if (a == b && b == c){
            cout << "Tam giac deu";
        }else if ( a == b || b == c || c == a){
            cout << "Tam giac can";
        }else if (b*b + a*a == c*c || c*c + b*b == a*a || a*a + c*c == b*b){
            cout << "Tam giac vuong";
        }else{
            cout << "Tam giac thuong";
        }
    }
    return 0 ; 
}