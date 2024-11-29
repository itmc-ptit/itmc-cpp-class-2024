#include <iostream>
#include <string>
using namespace std;
int countWords(const string& str) {
    int count = 0;
    bool so = false;
    for (char ch : str) {
        if (isspace(ch)) {
            if (so) {
                count++;
                so = false;
            }
        } else {
            so = true;
        }
    }
    if (so) { 
            count++;
    }
    return count;
}
int main() {
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    int demso = countWords(str);
    cout << "So tu trong chuoi la: " << demso << endl;
    return 0;
}
