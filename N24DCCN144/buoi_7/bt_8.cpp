#include <iostream>

using namespace std;

bool isPalindrome(long long n)
{
    string a = to_string(n);
    int size = a.length();

    for (int i = 0; i <= size / 2; i++)
    {
        if (a[i] != a[size - 1 - i])
        {
            return false;
        }
    }

    return true;

    cout << size / 2 << "      ";
}

int main()
{
    long long n = 0;
    cout << "nhap vao mot so nguyen bat ky: ";
    cin >> n;

    if (isPalindrome(n))
    {
        cout << n << " la so doi xung";
    }
    else
    {
        cout << n << " khong phai la so doi xung";
    }
}