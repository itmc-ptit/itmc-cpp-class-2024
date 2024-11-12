#include <iostream>
using namespace std;
int main()
{
    int ngay;
    cout <<"day la ngay thu may trong tuan ";
    cin >>ngay;
    switch (ngay)
    {
    case 1:
        cout <<"Monday";
        break;
    case 2:
        cout <<"Tuesday";
        break;
    case 3:
        cout <<"Wednesday";
        break;
    case 4:
        cout <<"Thurday";
        break;
    case 5:
        cout <<"Friday";
        break;
    case 6:
        cout <<"Saturday";
        break;
    default:
        cout <<"Sunday";
        break;
    }
}