#include <iostream>
using namespace std;

int main() {
    char kytu;
    cout << "Nhap mot ky tu: ";
    cin >> kytu;
    cout << "Ma ASCII cua ky tu '" << kytu << "' la: " << static_cast<int>(kytu) << endl;
    return 0;
}

