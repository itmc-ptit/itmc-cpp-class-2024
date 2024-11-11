#include<iostream>

using namespace std;
int main(){
    float a,b,c,d;
    cout<<"Hay nhap 4 so thap phan "<< endl;
    cin >>a>>b>>c>>d;
    float max=a;
    if (b >max) max = b;
    if (c> max) max = c;
    if (d> max) max = d;
    cout <<max<< " la so lon nhat";
}