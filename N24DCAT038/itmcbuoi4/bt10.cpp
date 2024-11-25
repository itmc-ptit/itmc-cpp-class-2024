#include <iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;

    switch (day)
    {
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Wednesday" << endl;
        break;
    case 5:
        cout << "Thursday" << endl;
        break;
    case 6:
        cout << "Friday" << endl;
        break;
    case 7:
        cout << "Saturday" << endl;
        break;
    default:
        cout << "Sunday" << endl;
    }

    return 0;
}
