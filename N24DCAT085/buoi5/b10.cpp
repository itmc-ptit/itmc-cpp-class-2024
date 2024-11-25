#include <iostream>
using namespace std;
void phanTichThuaSoNguyenTo(int n) {
    cout << "Cac thua so nguyen to cua " << n << " la: ";
    bool firstFactor = true;
    int count = 0;
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    if (count > 0) {
        if (!firstFactor) cout << " x ";
        cout << "2";
        if (count > 1) cout << "^" << count;
        firstFactor = false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0) {
            if (!firstFactor) cout << " x ";
            cout << i;
            if (count > 1) cout << "^" << count;
            firstFactor = false;
        }
    }
    if (n > 2) {
        if (!firstFactor) cout << " x ";
        cout << n;
    }
}

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;

    if (n > 1) {
        phanTichThuaSoNguyenTo(n);
    } else {
        cout << "Vui long nhap mot so lon hon 1.";
    }

    return 0;
}
