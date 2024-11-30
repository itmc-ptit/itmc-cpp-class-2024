#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    char c;
    cin >> s>>c;
    size_t pos = s.find(c);
    if (pos != string::npos) {
        cout <<  pos << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
