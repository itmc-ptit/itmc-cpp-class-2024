#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "nhap so a va b ";
    cin >> a >> b;

    if (a == 0)
    {
        if (b == 0)
        {
            cout << "ptr co vo so ngiem ";
        }
        else
        {
            cout << "ptr vo nghiem ";
        }
    }
    else
    {
        cout << "ptr co nghiem x =  " << -b / a;
    }

    return 0;
}
