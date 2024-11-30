#include <iostream>
#include <string>
using namespace std;
int dodai(const string& str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
   }
    return length;
}
int main() {
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    int length = dodai(str);
    cout << "Do dai cua chuoi la: " << length << endl;
    return 0;
}
