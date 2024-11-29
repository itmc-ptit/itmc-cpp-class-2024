//Sử dụng Nested Loop in ra bảng cửu chương từ 1 tới 9
#include <iostream>
using namespace std;

int main(){
    cout<<"đây là bảng cửu chương"<<endl;
    for (int i=1; i <=9 ; i++){            
        cout << endl; 
        for (int j = 1; j<=10 ; j++ ){
                cout << i << " x " << j << " = " << i*j << endl;
        }
    }
        return 0;
}