#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"ghi một ngày trong tuần bằng một số từ 1->7:\n";
    cin>>a;

    switch(a){
        case 1:
            cout<<"Sunday"<<endl;
            break;
        case 2:
            cout<<"Monday"<<endl;
            break;
        case 3:
            cout<<"Tuesday"<<endl;
            break;
        case 4:
            cout<<"Wednesday"<<endl;
            break;
        case 5:
            cout<<"Thursday"<<endl;
            break;
        case 6:
            cout<<"Friday"<<endl;
            break;
        case 7:
            cout<<"Saturday"<<endl;
            break;
        default:
            cout<<"oi oi oi BAKA !! \n"<<"NHẬP MMỘTT SỐ TỪ 1==>7 hiểu hông ? (╯°□°)╯︵ ┻━┻"<<endl;
    }
    return 0;
}