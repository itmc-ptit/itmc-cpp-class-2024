#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a;
    cout << "Hay nhap 1 so thuc "  ; 
    cin >> a ;
    double b = floor (a * 100) /100;
    cout << b ;
    return 0;
}