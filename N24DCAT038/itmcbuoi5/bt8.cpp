#include <iostream>
using namespace std;

int main()
{
    int height;
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= height - 1; i++)
    {
        cout << " ";
    }
    cout << "*" << endl;

    return 0;
}
