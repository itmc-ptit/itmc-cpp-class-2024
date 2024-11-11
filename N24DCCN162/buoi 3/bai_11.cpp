#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    string a;
    cout << "Nhap 1 chu: ";
    cin >> a;
    for (char c : a){
        if (islower(c)){
            cout<< "Ma Ascii cua chu do la: "<<tolower(c);
        } else if (isupper(c)){
            cout<< "Ma Ascii cua chu do la: "<<toupper(c);
        }
    }
    return 0;
}