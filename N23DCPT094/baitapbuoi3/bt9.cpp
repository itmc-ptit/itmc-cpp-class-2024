#include <iostream>
using namespace std;
int main () {
double number;
    cout << "Nhap so thuc : ";
    cin >> number ;
   double phanThapphan = number - static_cast<int>(number);
   cout << "Phan thap phan cua so: "<< phanThapphan <<endl;
    return 0;
}