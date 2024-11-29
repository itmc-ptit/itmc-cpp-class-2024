#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int maxCount = arr[0], maxIdx;
    for (int i = 0; i < n; i++)
    {
        int j = 0, count = 1;
        while (j < n && j != i)
        {
            if (arr[i] == arr[j])
                count++;
            j++;
        }
        if (count > maxCount)
        {
            maxIdx = i;
            maxCount = count;
        }
    }
    if (maxCount > 1)
    {
        cout << "So xuat hien nhieu nhat: " << arr[maxIdx] << endl;
        cout << "So lan xuat hien: " << maxCount << endl;
    }
    else {
        cout << "Ko co so xuat hien nhieu nhat." << endl;
    }

    return 0;
}
