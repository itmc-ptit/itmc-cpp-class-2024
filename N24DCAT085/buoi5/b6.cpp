#include <iostream>
using namespace std;
int main(){
    int so,tong=0;
    cout<<"nhap so: ";cin>>so;
    for(int i=1;i<so;i++){if(so%i==0){tong=tong+i;}}
    if(tong==so){cout<<" no la so hoan hao ";} else{cout<<"no khong phai so hoan hao ";}
}