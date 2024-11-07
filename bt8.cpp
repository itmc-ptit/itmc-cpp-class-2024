#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double soThuc_1, soThuc_2;
    cin >> soThuc_1 >> soThuc_2;
    double sum = soThuc_1 + soThuc_2;
    // cout << floor(sum) << endl;
    cout << static_cast<int>(sum);
    return 0;
}
