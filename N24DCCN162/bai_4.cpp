#include<iostream>

using namespace std;
int main(){
    float a,b,c,d;
    cout<<"Hay nhap 4 so thap phan "<< endl;
    cin >>a>>b>>c>>d;
    if (a > (b,c,d))  {
        cout<< a <<" la so lon nhat";
    }else if (b > (a,c,d)){
        cout<< b <<" la so lon nhat";
    }else if ( c > (a,b,d)){
        cout<< c <<" la so lon nhat";
    }else {
        cout<< d <<" la so lon nhat";
    }
    return 0;
}