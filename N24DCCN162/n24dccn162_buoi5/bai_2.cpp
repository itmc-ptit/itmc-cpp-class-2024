#include<iostream>
using namespace std;
int main() {
    int so;
    cout<<"Hay nhap 1 so tu 2 den 9: ";
    cin>>so;
    if((so<2)||(so>9)){
        cout<<"So nhap khong hop le";
    }else{
        cout<<"Bang cuu chuong cua "<<so<<" la: "<<endl;
        for(int i=1;i<=10;i++){
            
                cout<<so<<" x "<<i<<" = "<<i*so<<endl;
        }
    }
}