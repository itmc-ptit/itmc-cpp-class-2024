#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Nhập hệ số a: ";
    cin >> a;
    cout << "Nhập hệ số b: ";
    cin >> b;
    cout << "Nhập hệ số c: ";
    cin >> c;

    if (a == 0) {
        // Phương trình bậc nhất bx + c = 0
        if (b == 0) {
            if (c == 0) {
                cout << "Phương trình có vô số nghiệm." << endl;
            } else {
                cout << "Phương trình vô nghiệm." << endl;
            }
        } else {
            double x = -c / b;
            cout << "Phương trình có một nghiệm: x = " << x << endl;
        }
    } else {
        // Phương trình bậc hai ax^2 + bx + c = 0
        double delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "Phương trình vô nghiệm." << endl;
        } else if (delta == 0) {
            double x = -b / (2 * a);
            cout << "Phương trình có nghiệm kép: x = " << x << endl;
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phương trình có hai nghiệm phân biệt: " << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }

    return 0;
}
