#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập số lượng phần tử của mảng: ";
    cin >> n;
    int arr[n];
    cout << "Nhập các phần tử của mảng: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    int index = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
        cout << "Mảng sau khi xóa phần tử chẵn đầu tiên:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Không có phần tử chẵn nào trong mảng." << endl;
    }

    return 0;
}
