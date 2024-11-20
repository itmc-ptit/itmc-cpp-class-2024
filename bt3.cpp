#include <iostream>
<<<<<<< HEAD
=======
#include <cmath>
>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407
using namespace std;

int main()
{
<<<<<<< HEAD
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
=======
    int n;
    cin >> n;

    int root = sqrt(n);
    if (root * root == n)
    {
        cout << n << "day la so chinh phuong." << endl;
    }
    else
    {
        cout << n << "day khong phai la so chinh phuong." << endl;
>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407
    }

    return 0;
}
