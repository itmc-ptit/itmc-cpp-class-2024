#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int maxNum = max(max(a, b), max(c, d));
    cout << maxNum << endl;

    return 0;
}
