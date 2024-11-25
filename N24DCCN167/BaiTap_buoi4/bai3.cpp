#include <iostream>
#include <cmath>
using namespace std;
bool isInteger(double n) {
    return int(n) == n;//floor(n) == n
}
int main()
{
    int num;
    cin >> num;
    if (num > 0 && isInteger(sqrt(num)) && num == pow(sqrt(num),2))
    {
        cout << "Square Number !" << endl;
    }
    else
    {
        cout << "Not a square number !" << endl;
    }

    return 0;
}