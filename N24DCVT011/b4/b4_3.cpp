#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if ( n <= 0) {
        cout << "ko cos so chinh phiong";
    }else if ((int)sqrt(n) * (int)sqrt(n) == n ) {
        cout << n << " la so chinh phuong";
    } else {
        cout << "ko cos so chinh phiong";
    }

}