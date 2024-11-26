#include <iostream>
#include <vector>
#include <limits>
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
    int lonnhat = numeric_limits<int>::min();
    int nhonhat = numeric_limits<int>::max();
    for (int i = 0; i < n; i++) {
        if (arr[i] > lonnhat) {
            lonnhat = arr[i];
        }
        if (arr[i] < nhonhat) {
            nhonhat = arr[i];
        }
    }
    cout << "Gia tri lon nhat trong mang: " << lonnhat << endl;
    cout << "Gia tri nho nhat trong mang: " << nhonhat << endl;

    return 0;
}
