#include <iostream>
using namespace std;

int main() {
    const int Đáp_án = 24; 
    int a;

    cout << "ĐOÁN SỐ THOAI " << endl;

    while (true) {
        cout << " Hãy nhập 1 số : ";
        cin >> a ;

        if (a > Đáp_án) {
            cout << "Lớn hơn so với số cần đoán." << endl;
        } else if (a < Đáp_án) {
            cout << "Nhỏ hơn so với số cần đoán." << endl;
        } else {
            cout << "Bạn đã đoán đúng! Chúc mừn nhe !! gud job!!!!" << endl;
            break;
        }
    }

    return 0;
}
