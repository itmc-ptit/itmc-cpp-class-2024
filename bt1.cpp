#include <iostream>
using namespace std;

int main()
{
    int num;
    int soChan = 0, soLe = 0;

    while (true)
    {
        cin >> num;

        if (num < 0)
            break;

        if (num % 2 == 0)
            soChan++;
        else
            soLe++;
    }

    cout << "So chan: " << soChan << endl;
    cout << "So le: " << soLe << endl;

    return 0;
}
