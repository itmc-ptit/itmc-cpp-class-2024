#include <iostream>
using namespace std;

int main(){
    int a, le, chan;
    do{
    cout << "Nhap so:";
    cin >> a;
        if((a % 2) == 0){
            chan++;
        }else{
            le++;
        }
    } while(a >= 0);
    cout << "Co " << le << " so le" << endl << "Co " << chan << " so chan";
    return 0;
}