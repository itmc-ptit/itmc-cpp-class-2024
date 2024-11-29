//Sử dụng for loop in ra bảng cửu chương tương ứng nhập từ bàn phím.
#include <iostream>
using namespace std;

int main(){
    string a;
    cout<<"nhập một số từ 1->9 để in ra bản cửu chương tương ứng (nhập ""stop"" để dừng):";
    while (true){
        cin >> a;
        if (a == "stop"){
            break;
        }

        int b = stoi(a);
        if (b<=0 || b>9){
            cout << "nhập số từ một đến 9 thôi >:C, nhập lại đi :";
            continue;
        }

        for (int i=1; i <=10 ; i++){             
            cout << b << " x " << i << " = " << b * i << endl;
            continue;
        }
    }
    return 0;
}