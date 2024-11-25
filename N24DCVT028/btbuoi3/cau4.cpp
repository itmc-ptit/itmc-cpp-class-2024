#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "gia tri cua a la: ";cin >> a;
    cout << "gia tri cua b la: ";cin >> b;
    a = a + b; 
    b = a - b; 
    a = a - b; 
    cout << "sau khi hoan doi:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b ;

    return 0;
}