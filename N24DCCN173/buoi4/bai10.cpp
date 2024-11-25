#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; 
        cout <<"Thu ";
        cin >> n;
        switch (n)
        {
        case 2:
            cout << "Monday" << endl;;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;;
            break;
        case 7:
            cout << "Saturday" << endl;;
            break;
        case 8:
            cout << "Sunday" << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}