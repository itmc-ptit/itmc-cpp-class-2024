#include <iostream>
using namespace std;
int main () {
    int soNguyen;
    double soThuc;
    cout << "nhap 1 so nguyen: ";
    cin >> soNguyen;
    cout << "nhap 1 so thuc: ";
    cin>> soThuc;
    int sum= soThuc + soNguyen;

    cout << "tong cua 2 so : " << sum << endl;
    return 0;
}