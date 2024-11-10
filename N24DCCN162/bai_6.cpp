#include <iostream>

using namespace std;
int main(){
    int a;
    cout<<"Hay nhap 1 nam "<< endl;
    cin >> a;
    if(a % 4 ==0 && a%100 !=0 || a%400== 0|| a%100==0 && a%400!=0  ){
        cout<<a<<" la nam nhuan";
    }
    else {
        cout<< a<< " khong phai nam nhuan";
    }
    return 0;
}