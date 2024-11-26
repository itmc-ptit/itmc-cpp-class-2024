#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Nhap cac phan tu cua mang:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j <n-i-1; j++) {
            if (arr[j] > arr[j + 1]) {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1]= a;
            }
        }
    }
    cout << "Mang sau khi sap xep tang dan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}
