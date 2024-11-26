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
        cout << "Phan tu thu "<< i +1 << ": ";
        cin >> arr[i];
    }
    int lonnhat = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > lonnhat) {
            lonnhat =arr[i];
        }
    }
    vector<int> a(lonnhat + 1, 0);
    for (int i = 0; i < n; i++) {
        a[arr[i]]++;
    }
    int maxa = 0, maxb =arr[0];
    for (int i = 0; i <=lonnhat; i++) {
        if (a[i] >maxa) {
            maxa = a[i];
            maxb = i;
        }
    }
    cout << "Phan tu xuat hien nhieu nhat: " << maxb << endl;
    cout << "So lan xuat hien: " << maxa << endl;
    return 0;
}
