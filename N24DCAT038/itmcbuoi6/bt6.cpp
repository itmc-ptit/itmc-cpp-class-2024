#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] % 2 != 0)
        {
            n++;
            for (int j = n; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = 13;
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
