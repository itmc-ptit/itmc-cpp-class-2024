#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] % 2 != 0)
        {
            arr.insert(arr.begin() + i, 13);
            break;
        }
    }
    for (int i : arr)
        cout << i << " ";
    return 0;
}