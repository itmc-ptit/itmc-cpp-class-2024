#include <iostream>
using namespace std;
int a (int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int n;
    cout << "Nhập số lượng phần tử của mảng: ";
    cin >> n;

    int arr[100]; 
    cout << "Nhập các phần tử của mảng: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    int b = a(arr, n);

    if (b != -1) {
        for (int i = n; i > b + 1; i--) {
            arr[i] = arr[i - 1];
        }
        arr[b + 1] = 13; 
        n++;
        cout << "Mảng sau khi chèn số 13 vào sau phần tử lẻ cuối cùng:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Không có phần tử lẻ nào trong mảng." << endl;
    }

    return 0;
}
