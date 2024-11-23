#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string chuthuong(const string& chuoi) {
    string ketqua;
    for (char c : chuoi) {
        ketqua += tolower(c);
    }
    return ketqua;
}
int main() {
    string chuoi;
    cout << "nhap chuoi: ";
    getline(cin, chuoi);  
    string chuoi_thuong = chuthuong(chuoi);
    cout << "Chuoi sau khi chuyen thanh chu thuong: " << chuoi_thuong << endl;
    return 0;
}