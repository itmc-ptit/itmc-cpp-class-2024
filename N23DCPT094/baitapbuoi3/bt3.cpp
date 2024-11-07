#include <iostream>
using namespace std;
int main () {
    int a, b, temp ;
cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    cout << "gia tri ban dau cua a: a = " << a << ", b = " << b << endl;
temp = a;
a=b;
b= temp;
    cout << "gia tri sau khi doi: a = " << a << ", b = " << b << endl;

    return 0;
}