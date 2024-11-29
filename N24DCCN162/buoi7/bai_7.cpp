#include <iostream>
#include <string>
using namespace std;
string removeDuplicates(const string& str) {
    string result = "";
    string seen = "";
    for (char a:str) {
        if (seen.find(a) == string::npos) {
            result += a;
            seen += a;
        }  }
    return result;
}
int main() {
    string str;
    cout << "Nhap chuoi: ";
    getline(cin,str);
    string result = removeDuplicates(str);
    cout << "Chuoi sau khi loai bo ky tu trung lap: " << result << endl;
    return 0;
}
