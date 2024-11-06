#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a,c;
   cout << "Nhap 1 so thuc "<< endl;
   cin >> a;
   double b = floor(a);
   c = a - b;
   cout << "Phan thap phan cua so la: " <<c;
   return 0;
}