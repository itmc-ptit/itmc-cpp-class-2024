#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Hay nhap ba canh cua tam giac"<<endl;
    cin >>a>>b>>c;
    if ((a+b)>c && (a+c)>b && (b+c)>a){
    if (a==b && b==c){
        cout<<"Day la tam giac deu";
    }else if (a==b || a==c || b==c){
        cout<<"Day la tam giac can";  
    }else if ((a*a)== (b*b) + (c*c) ||(b*b)== (c*c)+(a*a) || (c*c)==(b*b)+(a*a)){
        cout<< "Day la tam giac vuong";
    }else {
        cout<<"Day la tam giac thuong";
    }    
    }else {
        cout<<"Do dai khong hop le";
    }
    }

