#include<iostream>
#include<string>
using namespace std;
string hangdonvi(int donvi){
    switch (donvi) {
        case 1:return"mot";
        case 2:return "hai";
        case 3:return"ba";
        case 4:return "bon";
        case 5:return "nam";
        case 6:return "sau";
        case 7:return"bay";
        case 8:return "tam";
        case 9:return "chin";
    }
}
string so(int n){
    if(n < 10){
        if (n == 0)return"khong";
        return hangdonvi(n);
    }else if (n < 20){
        if(n == 10) return "muoi";
        if(n == 15) return "muoi lam";
        return "muoi " + hangdonvi(n % 10);
    }else {
        int chuc = n / 10;
        int donvi = n % 10;
        string ketqua;
        switch (chuc) {
            case 2:ketqua = "hai muoi"; break;
            case 3:ketqua ="ba muoi"; break;
            case 4:ketqua = "bon muoi"; break;
            case 5:ketqua ="nam muoi"; break;
            case 6:ketqua ="sau muoi"; break;
            case 7:ketqua ="bay muoi"; break;
            case 8:ketqua = "tam muoi"; break;
            case 9:ketqua = "chin muoi"; break; 
        }
        if(donvi!= 0) {
            if (donvi== 5) {
                ketqua+= " lam";
            } else {
                ketqua+=" "+ hangdonvi(donvi);
            }
        }
        return ketqua;
    }
}
int main(){
    int n;
    cout << "Nhap 1 so nguyen nho hon 100: ";
    cin >> n;
    if(n < 0 || n >= 100){
        cout <<"So nhap khong hop le" << endl;
    }else{
        cout <<so(n) << endl;
     } return 0;
}
