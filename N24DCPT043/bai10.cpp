#include <iostream>
using namespace std;
int main () {
    
    char chucai;
    cout << "Nhap vao chu cai: ";
    cin >> chucai;

    if (chucai >= 'A' && chucai <= 'Z') {
        chucai = chucai + ('a' - 'A');
    } else if (chucai >= 'a' && chucai <= 'z') {
        chucai = chucai - ('a' - 'A');
    } else {
        cout << "Ky tu khong hop le!" << endl;
        return 1;
    }

    cout << "Ky tu sau khi chuyen doi: " << chucai << endl;
    return 0;
}