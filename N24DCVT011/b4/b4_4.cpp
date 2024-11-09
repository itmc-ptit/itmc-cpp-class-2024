#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, n, i;
    cin >> a >> b >> c >> d;
    if ( a > b) { 
        n = a; 
    } else {
        n = b;
    }
    if (c > d) {
        i = c;
    } else {
        i = d;
    }
    if ( i > n) {
        cout << "so lon nhat la " << i;
    } else {
        cout << "so lon nhat la " << n;
    }
}
/*
int main() {
    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < 4; i++) {
        if (a[i] > a[0]) {
            max = a[i];      
            }
    }
    cout << max;
}
*/