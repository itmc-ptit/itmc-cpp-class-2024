#include <iostream>
#include <string>
using namespace std;

bool containsChar(string str, char c) {
    for (char ch : str) {
        if (ch == c) {
            return true; 
        }
    }
    return false; 
}
int main () {
    string k;
    char c;
    cout << "Nhap chuoi ki tu: ";
    getline (cin, k);
    cout << " Nhap ki tu muon kiem tra: ";
    cin >> c;

    if (containsChar (k,c)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}