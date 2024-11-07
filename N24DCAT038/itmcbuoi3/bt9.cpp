#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double soThuc;
    cin >> soThuc;
    double phanThapPhan = soThuc - floor(soThuc);
    cout << phanThapPhan;
    return 0;
}