#include <iostream>
using namespace std;

int main()
{
    double a = 0;
    double b = 0;

    cout << "hay dien vao hai he so a b cua pt: ax + b = 0: ";
    cin >> a >> b;

    if (a == 0)
    {
        if (b == 0)
        {
            cout << "phuong trinh co vo so nghiem";
        }
        else
        {
            cout << "phuong trinh vo nghiem";
        }
    }
    else 
    {
        double nghiem = -b/a;
        if (nghiem == -0) nghiem = 0;
        cout << "nghiem cua phuong trinh la: " << nghiem;
    }

}