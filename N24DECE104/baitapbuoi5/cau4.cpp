#include <iostream>
using namespace std;

int main()
{
    int n;
    bool songuyento = true;
    cin >> n;
    if (n < 2)
    {
        songuyento = false;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                songuyento = false;
                break;
            }
        }
    }
    if (songuyento)
        cout << n << " là số nguyên tố." << endl;
    else
        cout << n << " không phải là số nguyên tố." << endl;

    return 0;
}
