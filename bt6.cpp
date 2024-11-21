#include <iostream>
using namespace std;

int main()
{
    int n, arr[n + 1];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] % 2 != 0)
        {
            for (int j = n; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = 13;
            n++;
            break;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
