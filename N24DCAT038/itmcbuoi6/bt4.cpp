#include <iostream>
using namespace std;

int main()
{
    int n, arr[n];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int C[n] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                C[i]++;
            }
        }
    }

    int maxC = 0;
    int mostC = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (C[i] > maxC)
        {
            maxC = C[i];
            mostC = arr[i];
        }
    }

    cout << mostC << " " << maxC + 1 << endl;

    return 0;
}
