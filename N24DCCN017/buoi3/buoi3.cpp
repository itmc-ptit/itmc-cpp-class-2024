#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"bai1"<<endl;
    int a1=10;
    cout<<a1<<endl;

    cout<<"bai2"<<endl;
    int a2=2,b2=10;
    cout<<a2+b2<<endl;

    cout<<"bai3"<<endl;
    int a3=9,b3=101,c3;
    c3=a3,a3=b3,b3=c3;
    cout<< a3<<" "<<b3<<endl;

    cout<<"bai4"<<endl;
    int a4=100,b4=30;
    a4+=b4;
    b4=a4-b4;
    a4-=b4;
    cout<<a4<<" "<<b4<<endl;

    cout<<"bai5"<<endl;
    string ten;
    cout<<"nhapten: ";
    cin>>ten;
    cout<<"xin chao"<<" "<<ten<<endl;

    cout<<"bai6"<<endl;
    float x;
    cout<<"nhap 1 so thap phan: ";cin>>x;
    cout<< setprecision(2)<<fixed<<x<<endl;

    cout<<"bai7"<<endl;
    int a7;
    cout<<"nhap 1 so nguyen: ";cin>>a7;
    float b7;
    cout<<"nhap 1 so thap phan: ";cin>>b7;
    cout<<a7+b7<<endl;

    cout<<"bai8"<<endl;
    float a8,b8;
    cout<<"nhap a: ";cin>>a8;
    cout<<"nhap b: ";cin>>b8;
    cout<<int(a8+b8)<<endl;
    
    cout<<"bai9"<<endl;
    float a9;
    cout<<"nhap a: ";cin>>a9;
    cout<<a9-int(a9)<<endl;

    cout<<"bai10"<<endl;
    char n10;
    cout<<"nhap 1 chu cai: ";cin>>n10;
    if (islower(n10)) cout<<char(n10-32)<<endl;
    else cout<<char(n10+32)<<endl;

    cout<<"bai11"<<endl;
    char a11;
    cout<<"nhap 1 ki tu: ";cin>>a11;
    cout<<int(a11)<<endl;

    cout<<"bai12"<<endl;
    int a12;
    cout<<"nhap 1 so bat ki: ";cin>>a12;
    //if (a12>=0 or a12<=255)
    cout<<char(a12);


}