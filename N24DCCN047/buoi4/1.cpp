//Nhập vào 1 kí tự chữ (char), kiểm tra kí tự đó là chữ hoa hay chữ thường
#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Nhập một ký tự: ";
    cin >> a;

    if (a >= 'A' && a <= 'Z')
    {
        cout << a << " là chữ viết hoa" << endl;
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << a << " là chữ viết thường" << endl;
    }
    else
    {
        cout << a << " không phải là chữ cái" << endl;
    }

    return 0;
}
