#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int num = 0, currentNum = n;
    while (n != 0)
    {
        num = num * 10 + n % 10;
        n /= 10;
    }
    if (currentNum == num)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    if (isPalindrome(n)) cout << "True";
    else cout << "False";
    return 0;
}