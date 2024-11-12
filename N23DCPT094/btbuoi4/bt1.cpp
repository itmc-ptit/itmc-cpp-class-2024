#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Nhập vào một ký tự chữ: ";
    cin >> c;
    if (c >= 'A' && c <= 'Z') {
        cout << c << " là chữ hoa." << endl;
    } else if (c >= 'a' && c <= 'z') {
        cout << c << " là chữ thường." << endl;
    } else {
        cout << c << " không phải là ký tự chữ." << endl;
    }
    return 0;
}
