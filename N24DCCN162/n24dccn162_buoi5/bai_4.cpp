#include <iostream>
using namespace std;
int main() {
    int so;
    cout << "Hay nhap 1 so: ";
    cin >> so;

    bool nguyen = true;
    if (so < 2) {
        cout << so << " khong phai so nguyen to";
    } else {
        for (int i = 2; i <= so / 2; i++) {
            if (so % i == 0) {
                nguyen = false;
                break;
            }}
        if (nguyen) {
            cout << so << " la so nguyen to";
        } else {
            cout << so << " khong phai so nguyen to";
             }}
    return 0;
}
