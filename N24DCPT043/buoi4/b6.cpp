#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int year ;
    cout << "Nhap vao 1 nam: ";
    cin >> year;
    if ((year % 4 ==0 && year % 100 != 0 )|| (year % 400 ==0)){
        cout << year << " la nam nhuan ";
    } else {
        cout << year << " khong la nam nhuan";
    }
return 0;

}
