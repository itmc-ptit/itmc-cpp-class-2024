#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100];
    
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

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    int tbinh = sum / n; 
    cout << tbinh << endl;

    return 0;
}
