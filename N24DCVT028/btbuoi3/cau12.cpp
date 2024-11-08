#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "nhap mot so bat ky: ";
    cin >> number;
    if (number >= 0 &&  number <= 255)
    {
        cout << "chu so tuong ung vs ma ASCII cua number =  " << char(number) ;
    }
    

    
}