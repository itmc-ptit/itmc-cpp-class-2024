#include <iostream>
#include <string>
using namespace std;
string xoakhoangtrong(string s) {
    size_t first = s.find_first_not_of(" "); 
    size_t last= s.find_last_not_of(" "); 
    if (first != string::npos && last != string::npos) {
        s= s.substr(first, last - first + 1); 
    } else {
        return ""; 
    }
    size_t pos = 0;
    while ((pos = s.find("  ", pos)) != string::npos) { 
        s.erase(pos, 1); 
    }
    return s;
}
int main() {
    string s;
    getline(cin, s); 
    cout << xoakhoangtrong(s);
    return 0;
}
