#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<typeinfo.h>
using namespace std;
int main(){
    cout<<"bai1"<<endl;
    char n1;
    cin>>n1;
    if (islower(n1)) cout<<n1<<" la chu thuong"<<endl;
    else if (isupper(n1)) cout<<n1<<" la chu in hoa"<<endl;
    else cout<<n1<<" khong phai la chu"<<endl;

    cout<<"bai2"<<endl;
    float a2,b2,x2,y2;
    cout<<"Nhap toa do diem 1: ";cin>>a2>>b2;
    cout<<"Nhap toa do diem 2: ";cin>>x2>>y2;
    float distance=sqrt(pow((x2-a2),2)+pow((y2-b2),2));
    cout<<"do dai 2 diem: "<<distance<<endl;

    cout<<"bai3"<<endl;
    int a3;
    cout<<"nhap 1 so nguyen duong: ";cin>>a3;
    if (a3<=0) cout<<a3<<" khong phai la so nguyen duong"<<endl;
    else {
        if (pow(int(sqrt(a3)),2)!=a3) cout<<a3<<" khong phai lo so chinh phuong"<<endl;
        else cout<<a3<<" la so chinh phuong"<<endl;
    }

    cout<<"bai4"<<endl;
    float a4,b4,c4,d4;
    cout<<"nhap 4 so: ";cin>>a4>>b4>>c4>>d4;
    float m4;
    if (a4>m4) m4=a4;
    if (b4>m4) m4=b4;
    if (c4>m4) m4=c4;
    if (d4>m4) m4=d4;
    cout<<"so lon nhat la: "<<m4<<endl;

    cout<<"bai5"<<endl;
    float a5,b5;
    cout<<"nhap 2 so dau tien: ";cin>>a5>>b5;
    a5 = (a5>b5)?a5:b5;
    cout<<"nhap so tiep theo: ";cin>>b5;
    a5 = (a5>b5)?a5:b5;
    cout<<"nhap so tiep theo: ";cin>>b5;
    a5 = (a5>b5)?a5:b5;
    cout<<"so lon nhat la: "<<a5<<endl;

    cout<<"bai6"<<endl;
    int n6;
    bool kt=false;
    cout<<"nhap so nam: ";cin>>n6;
    if (!(n6%100)) n6/=100;
    if (!(n6%4)) cout<<n6<<" la nam nhuan"<<endl;
    else cout<<n6<<" khong la nam nhuan"<<endl;

    cout<<"bai7"<<endl;
    float a7,b7;
    cout<<"nhap a va b: ";cin>>a7>>b7;
    if (a7==0&&b7==0) cout<<"phuong trinh co vo so nghiem";
    else if (a7!=0){ float kq=(b7*(-1)/a7);
        if (kq==0) kq*=-1;
        cout<<"nghiem cua phuong trinh la: "<<kq<<endl;
    }
    else cout<<"phuong trinh vo nghiem"<<endl;

    cout<<"bai8"<<endl;
    float a8,b8,c8,m8;
    cout<<"nhap 3 canh cua tam giac: ";cin>>a8>>b8>>c8;
    if (a8>c8) {m8=a8;a8=c8;c8=m8;}
    if(b8>c8) {m8=b8;b8=c8;c8=m8;}
    if(a8+b8<=c8 || b8+c8<=a8 || a8+c8<=b8) cout<<"3 canh khong tao thanh 1 tam giac"<<endl;
    else{
    if(pow(a8,2)+pow(b8,2)==pow(c8,2)) cout<<"3 canh tao thanh 1 tam giac vuong"<<endl;
    else if(a8==b8&&b8==c8) cout<<"3 canh tao thanh 1 tam giac deu"<<endl;
    else if((a8==b8)||(b8==c8)||(c8==a8)) cout<<"3 canh tao thanh 1 tam giac can"<<endl;
    else cout<<"3 canh tao thanh 1 tam giac thuong"<<endl;
    }

    cout<<"bai9"<<endl;
    float a9,b9,c9;
    cout<<"nhap a b c: ";cin>>a9>>b9>>c9;
    if(a9==0) {
        if (a9==0&&b9==0) cout<<"phuong trinh co vo so nghiem";
    else if (a9!=0){ float kq=(b9*(-1)/a9);
        if (kq==0) kq*=-1;
        cout<<"nghiem cua phuong trinh la: "<<kq<<endl;
        } 
    else cout<<"phuong trinh vo nghiem"<<endl;
    }
    else{
    float delta=pow(b9,2)-4*a9*c9;
    if(delta<0) cout<<"phuong trinh vo nghiem"<<endl;
    else if (delta==0) {float kq=(-b9/(2*a9)); cout<<"phuong trinh co 1 nghiem kep la: "<<kq<<endl;}
    else {float x1=(-b9+sqrt(delta))/(2*a9), x2=(-b9-sqrt(delta))/(2*a9);
    cout<<"phuong trinh co 2 nghiem la: "<<x1<<" va "<<x2<<endl;
        }
    }

    cout<<"bai10"<<endl;
    int n10;
    cout<<"nhap so ngay can doc: ";cin>>n10;
    switch (n10)
    {
    case (1):
        cout<<"Sunday"<<endl;
        break;
    case (2):
        cout<<"Monday"<<endl;
        break;
    case (3):
        cout<<"Tuesday"<<endl;
        break;
    case (4):
        cout<<"Wendnesday"<<endl;
        break;
    case (5):
        cout<<"Thursday"<<endl;
        break;
    case (6):
        cout<<"Friday"<<endl;
        break;
    case (7):
        cout<<"Saturday"<<endl;
        break;
    default:
        cout<<"khong phai cac thu trong tuan!"<<endl;
    }

    cout<<"bai11"<<endl;
    int n11,socuoi,sodau,i;
    cout<<"Nhập 1 số nguyên dương cần đọc n<100: ";cin>>n11;
        string f11,e11;
    if(n11>10) {socuoi=n11%10;sodau=n11/10;}
    else sodau=n11;
    switch (socuoi)
    {
    case (1):
        if(n11>20)e11="mốt";
        else e11="một";
        break;
    case (2):
        e11="hai";
        break;
    case (3):
        e11="ba";
        break;
    case (4):
        e11="bốn";
        break;
    case (5):
        e11="lăm";
        break;
    case (6):
        e11="sáu";
        break;
    case (7):
        e11="bảy";
        break;
    case (8):
        e11="tám";
        break;
    case (9):
        e11="chín";
        break;    
    default:
        break;
    }

    switch (sodau)
    {
    case (1):
        f11="một";
        break;
    case (2):
        f11="hai";
        break;
    case (3):
        f11="ba";
        break;
    case (4):
        f11="bốn";
        break;
    case (5):
        f11="năm";
        break;
    case (6):
        f11="sáu";
        break;
    case (7):
        f11="bảy";
        break;
    case (8):
        f11="tám";
        break;
    case (9):
        f11="chín";
        break;    
    default:
        f11="mười";
        break;
    }
    if(n11>19) cout<<n11<<"-"<<f11<<" mươi "<<e11<<endl;
    else if(n11>10) cout<<n11<<"-mười "<<e11<<endl;
    else cout<<n11<<"-"<<f11<<endl;
    
}