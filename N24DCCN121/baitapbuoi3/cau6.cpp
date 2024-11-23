#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a;
    int dem = 0;
    cin >> a;
    double b = double(a);
    while(b >= 1){
        dem++;
        b /= 10;
    }
    cout << setprecision(dem + 2) << a << endl;
    return 0;
}