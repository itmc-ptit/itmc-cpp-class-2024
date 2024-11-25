#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap vao mot so n (n < 100): ";
    cin >> n;

    if (n < 10)
    {
        // Đoc cac so tu 0 đến 9
        switch (n)
        {
        case 0:
            cout << "Khong" << endl;
            break;
        case 1:
            cout << "Mot" << endl;
            break;
        case 2:
            cout << "Hai" << endl;
            break;
        case 3:
            cout << "Ba" << endl;
            break;
        case 4:
            cout << "Bon" << endl;
            break;
        case 5:
            cout << "Nam" << endl;
            break;
        case 6:
            cout << "Sau" << endl;
            break;
        case 7:
            cout << "Bay" << endl;
            break;
        case 8:
            cout << "Tam" << endl;
            break;
        case 9:
            cout << "Chin" << endl;
            break;
        }
    }
    else if (n < 20)
    {
        // Đọc các số từ 10 đến 19
        if (n == 10)
            cout << "Muoi" << endl;
        else
            cout << "Muoi " << (n % 10 == 0 ? "" : to_string(n % 10)) << endl;
    }
    else if (n < 100)
    {
        // Đoc cac so tu 20 đến 99
        int tens = n / 10;
        int ones = n % 10;
        switch (tens)
        {
        case 2:
            cout << "Hai muoi";
            break;
        case 3:
            cout << "Ba muoi";
            break;
        case 4:
            cout << "Bon muoi";
            break;
        case 5:
            cout << "Nam muoi";
            break;
        case 6:
            cout << "Sau muoi";
            break;
        case 7:
            cout << "Bay muoi";
            break;
        case 8:
            cout << "Tam muoi";
            break;
        case 9:
            cout << "Chin muoi";
            break;
        }
        if (ones != 0)
            cout << " " << (ones == 1 ? "mot" : (ones == 5 ? "lam" : to_string(ones))) << endl;
        else
            cout << endl;
    }
}
