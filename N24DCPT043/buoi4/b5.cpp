#include <iostream>
using namespace std;
int main (){
    int a, max_a;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    max_a = a;
    for(int i = 2; i<=4;i++){
        cout << "Nhao so thu " << i << ":" ;
        cin >> a;
        if (a > max_a){
            max_a = a;
        }
    }
    cout << "So lon nhat la: " << max_a << endl;
return 0;
}