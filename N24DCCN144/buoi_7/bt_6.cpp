#include <iostream>
#include <string>

using namespace std;

int countWords(string str)
{
    int dem = 0;
    bool trongTu = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == char(32))
        {
            trongTu = false;
        }
        else if (trongTu == false)
        {
            trongTu = true;
            dem++;
        }
    }

    return dem;
}

int main()
{
    string a;
    cout << "nhap vao mot chuoi: ";
    getline(cin, a);

    cout << "chuoi |" << a << "| co " << countWords(a) << " tu";
}