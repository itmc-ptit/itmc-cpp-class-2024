#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || c + b <= a) {
        cout << "ko phai la tam giac" ;
    } else if (a == b && b == c) {
        cout << "tam giac deu" ;
    } else if (a == b || b == c || c == a ) {
        cout << "tam giac can" ;
    } else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
        cout << "tam giac vuong" ;
    } else {
        cout << "tam giac thuong";
    }
}
