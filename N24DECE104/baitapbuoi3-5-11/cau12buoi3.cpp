#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    if (number >= 0 && number <= 255) {
        char asciiChar = static_cast<char>(number); 
        cout <<  number << " " << asciiChar << " " << endl;
    } else {
        cout << endl;
    }

    return 0;
}
