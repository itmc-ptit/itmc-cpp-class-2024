#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
vector<string> tach(const string& chuoi) {
    vector<string> kq;
    stringstream ss(chuoi);
    string tu;
    while (ss >> tu) {
        kq.push_back(tu);
    }
    return kq;
}
int main() {
    string chuoi;
    cout << "Nhap chuoi: ";
    getline(cin, chuoi);
    vector<string> kq = tach(chuoi);
    for (size_t i = 0; i < kq.size(); i++) {
        cout << "\"" << kq[i] << "\"";
        if (i < kq.size() - 1) {
            cout << ", ";
        }
    }
    return 0;
}
