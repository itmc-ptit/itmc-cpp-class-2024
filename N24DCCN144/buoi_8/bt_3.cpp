#include <iostream>

using namespace std;

int main()
{
    string a;
    string b;

    cout << "nhap vao hai chuoi cach nhau mot dau cach: ";
    cin >> a >> b;

    (a == b) ? cout << "true" : cout << "false";
}