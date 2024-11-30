#include <iostream>
using namespace std;
int main() {
  int cn = 24,x;
    cout << "Chao mung den voi tro choi doan so!" << endl;
    do {
        cout << "Nhap vao 1 so de doan: ";
        cin >> x;
        if (x < cn) {
            cout << "Nho hon so can doan" << endl;
        } else if (x > cn) {
            cout << "Lon hon so can doan" << endl;
        } else {
            cout << "Chuc mung ban da doan dung!" << endl;
        }

    } while (x != cn);

    return 0;
}
