#include <iostream>

using namespace std;


void loiNoiDau()
{
    cout << "co phai ban luoi ghi ban cuu chuong khong ? \n";
    cout << "chac chan la vay roi, boi vi ban da bat toi len ma \n";
}

void inBangCuuChuong()
{
    cout << "ban cuu chuong" << "\n \n";
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cout << j << " x " << i << " = " << j*i << "   ";
        }

        cout << "\n";   
    }
}

int main()
{
    loiNoiDau();
    inBangCuuChuong();
}
