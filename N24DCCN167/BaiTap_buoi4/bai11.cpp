#include <iostream>
using namespace std;

void readUnit(int n)
{
    switch (n)
    {
    case 1:
        cout << "một";
        break;
    case 2:
        cout << "hai";
        break;
    case 3:
        cout << "ba";
        break;
    case 4:
        cout << "bốn";
        break;
    case 5:
        cout << "năm";
        break;
    case 6:
        cout << "sáu";
        break;
    case 7:
        cout << "bảy";
        break;
    case 8:
        cout << "tám";
        break;
    case 9:
        cout << "chín";
        break;
    }
}
void readDozen(int n)
{
    switch (n)
    {
    case 1:
        cout << "mười ";
        break;
    case 2:
        cout << "hai mươi ";
        break;
    case 3:
        cout << "ba mươi ";
        break;
    case 4:
        cout << "bốn mươi ";
        break;
    case 5:
        cout << "năm mươi ";
        break;
    case 6:
        cout << "sáu mươi ";
        break;
    case 7:
        cout << "bảy mươi ";
        break;
    case 8:
        cout << "tám mươi ";
        break;
    case 9:
        cout << "chín mươi ";
        break;
    }
}

int main()
{
    int n;
    cin >> n;
    if (n >= 0 && n < 100)
    {
        if (n == 10)
            cout << "mười" << endl;
        else if (n == 0)
        {
            cout << "không" << endl;
        }
        else if (n < 10)
        {
            readUnit(n);
        }
        else
        {
            readDozen(n / 10);
            if (n > 20 && n % 10 == 1)
                cout << "mốt";
            else if (n % 10 == 5)
                cout << "lăm";
            else
            {
                readUnit(n % 10);
            }
        }
    }
    else
    {
        cout << "Enter again. " << endl;
    }
}