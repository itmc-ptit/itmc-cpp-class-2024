#include <iostream>
#include <string>
using namespace std;

string donVi(int n)
{
    string ch[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    return ch[n];
}

int main()
{
    int n;
    cin >> n;

    if (n < 0 || n >= 100)
    {
        cout << "So khong hop le!" << endl;
    }
    else if (n < 10)
    {
        cout << donVi(n) << endl;
    }
    else
    {
        cout << donVi(n / 10) << " muoi " << donVi(n % 10) << endl;
    }

    return 0;
}
