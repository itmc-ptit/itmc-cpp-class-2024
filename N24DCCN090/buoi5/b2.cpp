#include <iostream>

using namespace std;

int layGiaTri()
{ 
    int n;
    cout << "ban hay nhap mot so nguyen : ";
    cin >> n;

    return n;
}

void loiNoicualaptrinhvien()
{
    cout << "ban khong thuoc bang cuu chuong ? \n";
    cout << "đừng lo, boi vi da co toi giup ban  :))";   
}

void inBangNhatChuong(int n)
{
    for (int i = 0; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << i*n << "\n";
    }
}

int main()
{
    loiNoicualaptrinhvien();

    int n = layGiaTri();

    inBangNhatChuong(n);
}
