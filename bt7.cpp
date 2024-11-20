#include <iostream>
using namespace std;

int main()
{
<<<<<<< HEAD
    int num;
    const int secret_num = 24;

    do
    {
        cin >> num;

        if (num < secret_num)
            cout << "Nho hon so voi so can doan." << endl;
        else if (num > secret_num)
            cout << "Lon hon so voi so can doan." << endl;

    } while (num != secret_num);

    cout << "Congratulations! Ban da doan dung roi." << endl;
=======
    double a, b;
    cin >> a >> b;

    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Phuong trinh co vo so nghiem." << endl;
        }
        else
        {
            cout << "Phuong trinh vo nghiem." << endl;
        }
    }
    else
    {
        double x = -b / a;
        cout << x << endl;
    }
>>>>>>> 6a063f3998ea5e077a56daa60c0fd06d33464407

    return 0;
}
