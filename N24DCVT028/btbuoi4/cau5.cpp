
#include<iostream>
using namespace std;
int main()
{
    int num, maxnum;
    cout << "nhap so dau tien: ";
    cin >> maxnum;
    for (int i = 2; i <= 4; ++i)

    {
        cout << "nhap so thu " << i << ": ";
        cin >> num;
        if (num > maxnum)
        {
            maxnum = num;
        }
    }

    cout << "so lon nhat la: " << maxnum;
    return 0;
}
