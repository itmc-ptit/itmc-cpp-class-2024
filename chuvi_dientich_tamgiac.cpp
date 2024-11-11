#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    cout << "Nhap do dai cac canh cua tam giac "<< endl;
    cin >> a>> b>> c;
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
    float p = (a+b+c)/2;
    float s = sqrt(p*(p - a)*(p - b)*(p - c));
    cout <<"Dien tich tam giac la: "<<s << endl<<"Chu vi la: "<<p;}
    else {
        cout<< "do dai 3 canh khong tao thanh tam giac ";
    }
    return 0 ;
}