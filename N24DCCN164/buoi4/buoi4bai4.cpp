#include <iostream>
using namespace std;
int main(){
    int x1,x2,x3,x4;
    cout<<"nhap x1, x2, x3, x4:"<<" "<<endl;
    cin>>x1>>x2>>x3>>x4;
    if(x1>x2&&x1>x3&&x1>x4){
        cout<<"x1="<<x1<<" "<< "la so lon nhat";
    }else if(x2>x3&&x2>x4){
        cout<<"x2="<<x2<<" "<< "la so lon nhat";
    } else if(x3>x4){
        cout<<"x3="<<x3<<" "<< "la so lon nhat";
    } else {
        cout<<"x4=" <<x4<<" " <<"la so lon nhat";
    }

}