#include <iostream>
#include <string>
using namespace std;
string xoakhoangtrong(string str) {
    size_t first = str.find_first_not_of(" "); 
    size_t last= str.find_last_not_of(" "); 
    if (first != string::npos && last != string::npos) {
        str= str.substr(first, last - first + 1); 
    } else {
        return ""; 
    }
    size_t pos = 0;
    while ((pos = str.find("  ", pos)) != string::npos) { 
        str.erase(pos, 1); 
    }
    return str;
}
int main() {
    string str;
    getline(cin, str); 
    cout << xoakhoangtrong(str);
    return 0;
}
