#include <iostream>
using namespace std;

int main()
{
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

    return 0;
}
