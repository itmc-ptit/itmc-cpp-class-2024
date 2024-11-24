#include <iostream>
using namespace std;
int main() {
    int m, n;
    cout << "Nhập số dòng và số cột của ma trận: ";
    cin >> m >> n;

    int mat1[m][n], mat2[m][n], sum[m][n];
    cout << "Nhập các phần tử của ma trận 1:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat1[i][j];
        }
    }
    cout << "Nhập các phần tử của ma trận 2:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat2[i][j];
        }
    }
    if (m <= 0 || n <= 0) {
        cout << "Kích thước ma trận không hợp lệ!" << endl;
        return 1;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << "Ma trận tổng là:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
