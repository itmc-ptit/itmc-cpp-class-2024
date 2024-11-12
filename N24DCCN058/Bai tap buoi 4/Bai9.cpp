#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    float a , b , c;
    cin >> a >> b >> c ;
    if (a == 0 ){
        if ( b == 0){
             c == 0 ? cout << "Vo so nghiem" : cout << "Vo nghiem";
        }else{
            cout << -c/b ; 
        }     
    }else{
        float d = b*b - 4*a*c ;
        d < 0 ? cout << "None" : cout << (-b + sqrt(d))/2*a << endl << (-b - sqrt(d))/2*a ;
    }
    return 0 ; 
}