#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b>c&&b+c>a&&a+c>b){
        if (a==b&&b==c&&c==a){
            cout<<"Tam Giac Deu"<<endl;
        }else if (a==b||b==c||a==c){
            cout<<"Tam Giac Can"<<endl;
        }else if (a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
            cout<<"Tam Giac Vuong"<<endl;
        }else{
            cout<<"Tam Giac Thuong"<<endl;
        }
    }else{
        cout<<"Khong La Tam Giac"<<endl;
    }
    return 0;
}