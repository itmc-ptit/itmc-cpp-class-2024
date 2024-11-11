#include <iostream>
#include <cctype> 
using namespace std;
int main() {
    char a ;
    cin >> a ; 
    a == (char)toupper(a) ? cout << "Upper" : cout << "Lower";
    return 0;
}
