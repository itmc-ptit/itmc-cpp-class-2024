#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    vector<int>arr(n);
    cout << "Nhap cac phan tu cua mang: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    int xoa=-1;
    for (int i= 0; i < n; i++) {
        if (arr[i]% 2 == 0) {
            xoa = i;
            break;
        }
    }
    if (xoa != -1) {
        for (int i = xoa; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    } else {
        cout << "Khong co phan tu chan nao trong mang." << endl;
    }
    cout << "Mang sau khi xoa phan tu chan dau tien: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
