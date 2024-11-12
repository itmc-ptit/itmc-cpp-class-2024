#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Nhap 1 so tu 0 den 255: ";
    cin >> a;
    if (a >= 0 && a <= 255) {
        cout << "Ky tu tuong ung voi ma ASCII " << a << " la: '" << static_cast<char>(a) << "'" << endl;
    } else {
        cout << "So nhap vao khong hop le. Vui long nhap so tu 0 den 255." << endl;
    }
    return 0;
}

