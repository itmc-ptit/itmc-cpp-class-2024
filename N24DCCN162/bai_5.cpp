#include <iostream>

using namespace std;
int main (){
    float a,b;
    cout << "Hay nhap so thu nhat"<< endl;
    cin>> a;
    cout  <<"Hay nhap so thu hai"<< endl;
    cin >>b;
    if (b>a) a=b;
    cout  <<"Hay nhap so thu ba"<< endl;
    cin >>b;
    if (b>a) a=b;
    cout  <<"Hay nhap so thu bon"<< endl;
    cin >>b;
    if (b>a) a=b;
    cout <<a << " la so lon nhat";
    return 0;
}