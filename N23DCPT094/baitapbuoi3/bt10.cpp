#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    char letter;
    cout << "Nhap 1 chu cai: ";
    cin >> letter;

    if (isupper(letter)) {
        cout << "chu cai thuong la: " << (char)tolower(letter) << endl;
    } else if (islower(letter)) {
        cout << "chu cai in hoa la: " << (char)toupper(letter) << endl;
    } else {
        cout << "hay nhap 1 chu cai hop le!" << endl;
    }

    return 0;
}
