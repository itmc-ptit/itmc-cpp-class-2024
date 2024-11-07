#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Nhập một số từ 0 đến 255: ";
    cin >> num;

    if (num >= 0 && num <= 255) {
        cout << "Ký tự tương ứng với mã ASCII " << num << " là: " << (char)num << endl;
    } else {
        cout << "Vui lòng nhập một số trong khoảng từ 0 đến 255!" << endl;
    }

    return 0;
}
