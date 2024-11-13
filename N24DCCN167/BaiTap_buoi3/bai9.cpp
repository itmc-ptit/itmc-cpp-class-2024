#include <iostream>
using namespace std;
int main()
{
    float num;
    cin >> num;
    float decimalPart = num - int(num);
    cout << decimalPart;
    return 0;
}