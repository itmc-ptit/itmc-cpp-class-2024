#include <iostream>
using namespace std;

int main()
{
    int number;
    int oddCount = 0;
    int evenCount = 0;

    cout << "Nhập các số nguyên (nhập số âm để kết thúc): " << endl;

    while (true)
    {
        cin >> number;
        if (number < 0)
        {
            break;
        }
        if (number % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << "Số lượng số chẵn: " << evenCount << endl;
    cout << "Số lượng số lẻ: " << oddCount << endl;

    return 0;
}