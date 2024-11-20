#include <iostream>
using namespace std;

int main()
{
<<<<<<< HEAD
    int num;
    int soChan = 0, soLe = 0;

    while (true)
    {
        cin >> num;

        if (num < 0)
            break;

        if (num % 2 == 0)
            soChan++;
        else
            soLe++;
    }

    cout << "So chan: " << soChan << endl;
    cout << "So le: " << soLe << endl;
=======
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Day la chu hoa." << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Day la chu thuong." << endl;
    }
    else
    {
        cout << "Day khong phai ky tu chu cai." << endl;
    }
>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407

    return 0;
}
