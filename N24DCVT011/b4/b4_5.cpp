#include <iostream>
using namespace std;
int main () {
    int a, b, c, d, max;
    cin >> a >> b >> c >> d;
    if ( a > b) { 
        max = a; 
    } else {
        max = b;
    }
    if (c > max) {
        max = c;
    } 
    if (d > max) {
        max = d;
    }
    cout << "so lon nhat la " << max;
    
}
