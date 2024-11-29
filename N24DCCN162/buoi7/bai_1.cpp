#include <iostream>
#include <vector>
using namespace std;
int findMin(const vector<int>& arr) {
    int min = arr[0];
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
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
    cout << "GT nho nhat la: " << findMin(arr) << endl;
    return 0;
}
