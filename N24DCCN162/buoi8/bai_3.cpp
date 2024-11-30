#include <iostream>
#include <string>
using namespace std;
bool sosanhchuoi(const string& chuoi1, const string& chuoi2) {
    return chuoi1 == chuoi2;
}
int main() {
    string chuoi1, chuoi2;
        cout << "nhap chuoi thu nhat:` ";
    getline(cin, chuoi1);
    cout << "Nhap chuoi thu hai: ";
    getline(cin, chuoi2);
    if (sosanhchuoi(chuoi1, chuoi2)) {
        cout << "Hai chuoi bang nhau" << endl;
    } else {
        cout << "Hai chuoi khong bang nhau" << endl;
    }
 return 0;
}
