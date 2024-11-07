#include<iostream>
#include<cctype>
using namespace std;

int main() {
    char c; cin >> c;
    if (islower(c)) { 
        cout << char(toupper(c)) << endl; 
    } else if (isupper(c)) { 
        cout << char(tolower(c)) << endl; 
    }    
    return 0;
}