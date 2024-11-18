#include <iostream>
using namespace std;
int main () {
    int a;
    cout << "nhap so de in bang cuu chuong: ";
    cin >> a ;
     cout << "bang cuu chuong"<< a << " :" << endl;
     for (int i =1; i<=10; i++) {
        cout << a << "x" << i << " = " << a*i << endl;
     }
     return 0;
}