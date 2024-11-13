#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "hay nhap vao mot so (< 100): ";
    cin >> n;

    switch (n)
    {
        case 0:
            cout << "khong";
            break;
        case 1:
            cout << "mot";
            break;
        case 2:
            cout << "hai";
            break;
        case 3:
            cout << "ba";
            break;
        case 4:
            cout << "bon";
            break;
        case 5:
            cout << "nam";
            break;
        case 6:
            cout << "sau";
            break;
        case 7:
            cout << "bay";
            break;
        case 8:
            cout << "tam";
            break;
        case 9:
            cout << "chin";
            break;
        case 10:
            cout << "muoi";
            break;
        default:
            cout << "";
            break;
    }


    
    if (n > 10 && n < 20) 
    {
        cout << "muoi ";
        switch (n - 10)
        {
            case 1:
                cout << "mot";
                break;
            case 2:
                cout << "hai";
                break;
            case 3:
                cout << "ba";
                break;
            case 4:
                cout << "bon";
                break;
            case 5:
                cout << "nam";
                break;
            case 6:
                cout << "sau";
                break;
            case 7:
                cout << "bay";
                break;
            case 8:
                cout << "tam";
                break;
            case 9:
                cout << "chin";
                break;
            default:
                cout << "";
                break;
        }
    }

    if (n >= 20)
    {
        switch (n / 10)
        {
            case 1:
                cout << "mot";
                break;
            case 2:
                cout << "hai";
                break;
            case 3:
                cout << "ba";
                break;
            case 4:
                cout << "bon";
                break;
            case 5:
                cout << "nam";
                break;
            case 6:
                cout << "sau";
                break;
            case 7:
                cout << "bay";
                break;
            case 8:
                cout << "tam";
                break;
            case 9:
                cout << "chin";
                break;
            default:
                cout << "";
                break;
        }

        cout << " muoi ";

        switch (n % 10)
        {
            case 1:
                cout << "mot";
                break;
            case 2:
                cout << "hai";
                break;
            case 3:
                cout << "ba";
                break;
            case 4:
                cout << "bon";
                break;
            case 5:
                cout << "nam";
                break;
            case 6:
                cout << "sau";
                break;
            case 7:
                cout << "bay";
                break;
            case 8:
                cout << "tam";
                break;
            case 9:
                cout << "chin";
                break;
            default:
                cout << "";
                break;
        }
    }
}