#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh vo so nghiem." << endl;
        } else {
            cout << "Phuong trinh vo nghiem." << endl;
        }
    } else {
        double x = -b / a;
        cout << "Nghiem cua phuong trinh la: x = " << x << endl;
    }
    return 0;
}
