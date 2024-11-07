#include <iostream>
using namespace std;
int main () {
    double a, b;
    cout << "nhap a: ";
    cin >> a ;
    cout << "nhap b: ";
    cin >> b;
    int phan_nguyen_tong = static_cast<int>(a + b);
        cout << "phan nguyen tong : " << phan_nguyen_tong << endl;

    return 0;
}