#include <iostream>
using namespace std;

int main() {
    int a, max;

    cout << "Nhap vao so thu nhat: ";
    cin >> a;
    max = a ; 

    for (int i = 1; i < 4; i++) { 
        cout << "Nhap vao so tiep theo: ";
        cin >> a;
        
        if (a > max) {
            max = a; 
        }
    }

    cout << "So lon nhat trong bon so la: " << max << endl;

    return 0;
}
