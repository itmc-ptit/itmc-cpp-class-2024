#include <iostream>

using namespace std;

int layGiaTri()
{ 
    int n;
    cout << "ban hay nhap mot so nguyen (1-9) de toi in ra bang nhat chuong tuong ung: ";
    cin >> n;

    return n;
}

void loiNoiDau()
{
    cout << "ban khong thuoc bang cuu truong y gi ? \n";
    cout << "ban khong can lo dau, boi vi da co toi giup ban in no ra roi :))";   
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
    loiNoiDau();

    int n = layGiaTri();

    inBangNhatChuong(n);
}
