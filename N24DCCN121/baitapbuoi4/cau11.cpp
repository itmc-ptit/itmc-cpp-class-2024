#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so:";
    cin >> n;
    int a = int(n/10);
    int b = int(n%10);
    if(n/10 < 1){
        switch(n){
            case 0:
                cout << "Khong";
                break;
            case 1:
                cout << "Mot";
                break;
            case 2:
                cout << "Hai";
                break;
            case 3:
                cout << "Ba";
                break;
            case 4:
                cout << "Bon";
                break;
            case 5:
                cout << "Nam";
                break;
            case 6:
                cout << "Sau";
                break;
            case 7:
                cout << "Bay";
                break;
            case 8:
                cout << "Tam";
                break;
            case 9:
                cout << "Chin";
                break;
        }
        return 0;
   }else{
        switch(a){
            case 1:
                cout << "Muoi ";
                break;
            case 2:
                cout << "Hai muoi ";
                break;
            case 3:
                cout << "Ba muoi ";
                break;
            case 4:
                cout << "Bon muoi ";
                break;
            case 5:
                cout << "Nam muoi ";
                break;
            case 6:
                cout << "Sau muoi ";
                break;
            case 7:
                cout << "Bay muoi ";
                break;
            case 8:
                cout << "Tam muoi ";
                break;
            case 9:
                cout << "Chin muoi ";
                break;
        }
        switch(b){
            case 1:
                cout << "mot";
                break;
            case 2:
                cout << "hai";
                break;
            case 3:
                cout << "ba";
                break;
            case 4:
                cout << "bon";
                break;
            case 5:
                cout << "nam";
                break;
            case 6:
                cout << "sau";
                break;
            case 7:
                cout << "bay";
                break;
            case 8:
                cout << "tam";
                break;
            case 9:
                cout << "chin";
                break;
        }
        return 0;
   }
}