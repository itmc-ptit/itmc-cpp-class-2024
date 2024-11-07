#include <iostream>
using namespace std;
int main() {
    char chu;
    cout << "Nhap mot chu cai: ";
    cin >> chu;
    if (chu >= 'A' && chu <= 'Z') {
        chu = chu + ('a' - 'A');
        cout << "Chu cai thuong cua chu cai vua nhap: " << chu << endl;
    } else if (chu >= 'a' && chu <= 'z') {
        chu = chu - ('a' - 'A');
        cout << "Chu cai in hoa cua chu cai vua nhap:  " << chu << endl;
    } else {
        cout << "Ky tu nhap vao khong phai la chu cai" << endl;
    }
    return 0;
}

