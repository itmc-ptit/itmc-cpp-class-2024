#include <iostream>
#include <math.h>
using namespace std;
int main () {
    double a, b, c;
    cin >> a >> b >> c;
    double denta = b*b - 4*a*c;
    if (a == b == c == 0) {
        cout << "pt co vo so no" ;
    } else if ( a == 0 ) {
        cout << "x = " << -c/b;
    }else if (denta < 0) {
        cout << "pt vo no" ;
    } else if (denta == 0) {
        cout << "x1 = x2 = " << (-b)/(2*a);
    } else {
        cout << "x1 = " << ((-b) + sqrt(denta))/(2*a) << " x2 = " << ((-b) - sqrt(denta))/(2*a);
    }
}
