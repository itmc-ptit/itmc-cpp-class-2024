#include <iostream>
#include <string>
using namespace std;
bool containsChar(const string& str, char c) {
    for (char ch : str) {
        if (ch == c) {
            return true;
        }
    }
    return false;
}
int main() {
    string str;
    char c;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    cout << "Nhap ky tu can kiem tra: ";
    cin >> c;
    if (containsChar(str, c)) {
        cout << "Chuoi khong chua ky tu  " << c << endl;
    } else {
        cout << "Chuoi khong chua ky tu  " << c << endl;
    }
    return 0;
}
