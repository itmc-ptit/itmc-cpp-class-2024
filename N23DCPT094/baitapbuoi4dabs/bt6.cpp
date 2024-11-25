#include <iostream>
using namespace std;

bool laNamNhuan(int nam) {

    return (nam % 4 == 0 && (nam % 100 != 0 || nam % 400 == 0));
}

int main() {
    int nam;
    cout << "Nhap vao nam: ";
    cin >> nam;

    if (laNamNhuan(nam)) {
        cout << nam << " la nam nhuan." << endl;
    } else {
        cout << nam << " khong phai la nam nhuan." << endl;
    }

    return 0;
}
