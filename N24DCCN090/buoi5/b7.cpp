#include <iostream>

using namespace std;

int main()
{
    const int number = 24;
    int n = 0;

    bool running = true;

    cout << "tro choi doan doan dung thi nghi choi \n\n";
    while (n!=24)
    {
        cout << "hay nhap mot so bat ki: ";
        cin >> n;

        
            if (n > number) cout << "lon hon so can doan, \n";
            else cout << "nho hon so can doan,\n ";
        
    }
    cout <<"you are win!!!!";
}