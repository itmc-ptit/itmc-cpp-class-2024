#include<iostream>
using namespace std;
bool nguyen(int a) {
if (a < 2) return false;
        for (int i = 2; i <= a / 2; i++) {
            if (a % i == 0) return false;
        }return true;
    }
int main(){
    int so;
    cout<<"Hay nhap 1 so: ";
    cin>>so;
cout<<"Cac so nguyen to nho hon "<<so<<" la: "<<endl;
for(int i=0;i<so;i++){
    if(nguyen(i)){
        cout<<i<<" ";
    }
}return 0;
}