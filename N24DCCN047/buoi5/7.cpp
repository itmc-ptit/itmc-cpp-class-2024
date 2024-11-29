//Code game “trò chơi đoán số”
#include <iostream>
using namespace std;

int main(){
    int a;
    int b = 24;

    while (true){
        cout<<"nhập số cần đoán đi 👉👈: ";
        cin>>a;
        if (a != b){
            if (a > b){
                cout<<"Nhỏ hơn so với số cần đoán"<<endl;
            }
            else {
                cout<<"Lớn hơn so với số cần đoán"<<endl;
            }
            continue;
        }

        if (a == b){
            cout << "おめでとう :DD"<<endl;
            break;
        }
    }
    return 0;
}