#include <iostream>
using namespace std;
int main() {
    int a ;
    cout << "Nhap mot so tu 0 den 255: ";
    cin >> a;

    if (a >= 0 && a<= 255) {
        char asciiChar = static_cast<char>(a);
        cout << "Ki tu ASII tuong ung la: " << asciiChar << endl;
    } else {
        cout << "Vui long nhap lai: " << endl;
    }

    return 0;
}