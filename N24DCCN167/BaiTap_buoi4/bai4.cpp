#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b && a > c && a > d) cout << a << " la so lon nhat." << endl;
    if (b > a && b > c && b > d) cout << b << " la so lon nhat." << endl;
    if (c > b && c > a && c > d) cout << c << " la so lon nhat." << endl;
    if (d > b && d > c && d > a) cout << d << " la so lon nhat." << endl;

    return 0;
}
