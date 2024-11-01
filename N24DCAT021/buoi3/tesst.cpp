#include <iostream>
using namespace std;

// Hàm in hàng thứ i của n cây thông với chiều cao h
void printRow(int h, int n, int row) {
    for (int t = 0; t < n; t++) {
        // In khoảng trắng để căn giữa cho cây thứ t
        for (int j = 1; j <= h - row; j++) {
            cout << " ";
        }
        // In các dấu * tạo thành hàng thứ row của cây thứ t
        for (int k = 1; k <= (2 * row - 1); k++) {
            cout << "*";
        }
        // Thêm khoảng trắng sau mỗi cây thông trừ cây cuối cùng
        if (t < n - 1) {
            cout << "   ";  // Khoảng cách giữa các cây thông
        }
    }
    cout << endl; // Xuống dòng sau khi in xong hàng của tất cả các cây thông
}

int main() {
    int n, m;
    
    // Nhập số lượng cây thông và chiều cao mỗi cây
    cout << "Nhập số cây thông n: ";
    cin >> n;
    cout << "Nhập chiều cao mỗi cây thông m: ";
    cin >> m;
    
    // In n cây thông theo chiều ngang
    for (int i = 1; i <= m; i++) {
        printRow(m, n, i);
    }
    
    return 0;
}
