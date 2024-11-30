#include <iostream>
#include <string>
using namespace std;
int kytu(const string& chuoi, char c) {
    size_t vitri = chuoi.find(c);
    if (vitri != string::npos) {
        return vitri;
    } else {
        return -1;
    }
}
int main() {
    string chuoi;
    char c;
    cout << "Nhap chuoi: ";
    getline(cin, chuoi);
    cout << "Nhap ky tu can tim: ";
    cin >> c;
    int vi_tri = kytu(chuoi, c);
    if (vi_tri != -1) {
        cout <<"0"<< endl;
    } else {
        cout <<"-1"<< endl;
    }
    return 0;
}
