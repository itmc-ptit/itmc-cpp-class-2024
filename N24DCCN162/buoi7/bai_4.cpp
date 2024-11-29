#include <iostream>
using namespace std;
int sumOddNumbers(int arr[], int size) {
    int tong = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            tong += arr[i];
        }
    }
    return tong;
}
int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    if (n <= 0) {
        cout << "So luong phan tu khong hop le!" << endl;
        return 1;
    }
    int arr[n];
    cout << "Nhap cac phan tu cua mang:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    int result = sumOddNumbers(arr, n);
    cout << "Tong cac so le trong mang la: " << result << endl;
    return 0;
}
