#include <iostream>
#include <string>
using namespace std;
string daochuoi(const string& str) {
    string reversed = str;
    int start = 0, end = str.length() - 1;
    while (start < end) {
        swap(reversed[start], reversed[end]);
        start++;
        end--;
    }return reversed;
}
int main() {
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    string reversed = daochuoi(str);
    cout << "Chuoi sau khi dao nguoc: " << reversed << endl;
    return 0;
}
