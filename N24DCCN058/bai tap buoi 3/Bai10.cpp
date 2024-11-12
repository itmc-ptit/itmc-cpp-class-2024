#include <iostream>
#include <cctype> 
using namespace std;
int main() {
    char a ;
    cin >> a ; 
    a == (char)toupper(a) ? cout << (char)tolower(a) : cout << (char)toupper(a);
    return 0;
}
