#include <iostream>
#include <sstream>
using namespace std;
string xoacach(const string& chuoi) {
    stringstream ss(chuoi);
    string tu, kq;
    while (ss >> tu) {
        if (!kq.empty()) {
            kq += " ";
        }
        kq += tu;
    }
    return kq;
}
int main() {
    string chuoi;
    cout << "Nhap chuoi: ";
    getline(cin, chuoi);
    string ketQua = xoacach(chuoi);
    cout << ketQua<< endl;
    return 0;
}
