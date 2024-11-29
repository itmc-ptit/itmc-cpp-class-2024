#include <iostream>
using namespace std;

int main()
{
    int num, maxNum;
    cin >> maxNum;

    for (int i = 1; i < 4; i++)
    {
        cin >> num;
        if (num > maxNum)
        {
            maxNum = num;
        }
    }

    cout << maxNum << endl;

    return 0;
}
