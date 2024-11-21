#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int tong = 0, tich = 1;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        tong += arr[i];
        tich *= arr[i];
    }

    double tb = tong / (double)n;

    cout << tong << " " << tich << " " << tb << endl;

    return 0;
}
