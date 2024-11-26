#include <iostream>
using namespace std;
int main()
{
    // ax + b = 0
    int a, b;
    cin >> a >> b;
    if (a == 0) {
        cout << "ko phai bac nhat.";
    }
    else if (b == 0) {
        cout << "x = 0" << endl;
    }
    else {
        cout << "x = " << double(-b) / a << endl;
    }

  
    return 0;
}
