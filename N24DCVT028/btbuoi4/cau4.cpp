#include <iostream>
using namespace std;

int main() {
    int a, b, maxNum;

  
    cout << "nhap so thu nhat: ";
    cin >> a;
    maxNum = a;  

    cout << "nhap so thu hai: ";
    cin >> b;
    if (b > maxNum) maxNum = b;  

    cout << "nhap so thu ba: ";
    cin >> a;
    if (a > maxNum) maxNum = a;  

    cout << "nhap so thu tu: ";
    cin >> b;
    if (b > maxNum) maxNum = b; 


    cout << "so lon nhat la: " << maxNum << endl;

    return 0;
}