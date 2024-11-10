#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int a,b,c,d;
    cout << "Nhap 4 so tu ban phim: ";
    cin >> a >> b >> c >> d ;
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    cout << max<< " la so lon nhat!" << endl;
return 0;
}