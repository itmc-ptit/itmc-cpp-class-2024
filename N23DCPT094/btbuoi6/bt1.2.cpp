#include <iostream>
using namespace std;

int main() {
    int n;
    int a[1000]; 
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong phan tu cua mang phai lon hon 0!" << endl;
        return 0;
    }

    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) { 
        cin >> a[i];
    }

    int tich = 1; 
    for (int i = 0; i < n; i++) { 
        tich *= a[i];
    }

    cout << "Tich cua cac phan tu trong mang: " << tich << endl;

    return 0;
}
