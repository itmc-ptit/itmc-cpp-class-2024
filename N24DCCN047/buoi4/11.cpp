//Nhập vào 1 số n < 100, in ra cách đọc của số này. vd: 19 - mười chín, 99 – chín mươi chín
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Nhập vào 1 số n < 100: ";
    cin>>n;

    if (n>=100||n<0){
        cout<<"VỐ LÝ"<<endl;
        return 0;
    }

    int chuc = n/10;
    int dovi = n%10;

    switch (chuc){
        case 0:       // bé hơn 10
            switch (dovi){
                case 0: cout<<"không"; break;
                case 1: cout<<"một"; break;
                case 2: cout<<"hai"; break;
                case 3: cout<<"ba"; break;
                case 4: cout<<"bốn"; break;
                case 5: cout<<"năm"; break;
                case 6: cout<<"sáu"; break;
                case 7: cout<<"bảy"; break;
                case 8: cout<<"tám"; break;
                case 9: cout<<"chín"; break;
            }
            break;
        case 1:   // 10->19
            cout<<"mười ";
            if (dovi != 0){
                switch (dovi) {
                case 1: cout<<"một"; break;
                case 2: cout<<"hai"; break;
                case 3: cout<<"ba"; break;
                case 4: cout<<"bốn"; break;
                case 5: cout<<"lâm"; break;
                case 6: cout<<"sáu"; break;
                case 7: cout<<"bảy"; break;
                case 8: cout<<"tám"; break;
                case 9: cout<<"chín"; break;
                }
            }
            break;
        default: // let him cook T-T
            switch(chuc){         
                case 2: cout<<"hai mươi"; break;
                case 3: cout<<"ba mươi"; break;
                case 4: cout<<"bốn mươi"; break;
                case 5: cout<<"năm mươi"; break;
                case 6: cout<<"sáu mươi"; break;
                case 7: cout<<"bảy mươi"; break;
                case 8: cout<<"tám mươi"; break;
                case 9: cout<<"chín mươi"; break;
            }
            if (dovi != 0){ cout<<" ";
                switch (dovi) {
                    case 1: cout<<"mốt"; break;
                    case 2: cout<<"hai"; break;
                    case 3: cout<<"ba"; break;
                    case 4: cout<<"bốn"; break;
                    case 5: cout<<"lâm"; break; 
                    case 6: cout<<"sáu"; break;
                    case 7: cout<<"bảy"; break;
                    case 8: cout<<"tám"; break;
                    case 9: cout<<"chín"; break;
                }
            }        
    } return 0;   
}
