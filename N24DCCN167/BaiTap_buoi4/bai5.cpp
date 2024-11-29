#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b && a > c && a > d)
        cout << "max: " << a << endl;
    if (b > a && b > c && b > d)
        cout << "max: " << b << endl;
    if (c > b && c > a && c > d)
        cout << "max: " << c << endl;
    if (d > b && d > c && d > a)
        cout << "max: " << d << endl;

    return 0;
}
