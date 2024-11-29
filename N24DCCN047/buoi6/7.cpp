#include <iostream>
using namespace std;

int main(){
    int a1,b1,a2,b2;

    cout << "Nhập số hàng và số cột của ma trận thứ nhất: ";
    cin>>a1>>b1;
    cout << "Nhập các phần tử của ma trận thứ nhất:" << endl;
    int mt1[a1][b1];
    for (int i = 0; i < a1; i++){
        for (int j = 0; j < b1; j++){
            cin>>mt1[i][j];
        }
    }

    cout << "Nhập số hàng và số cột của ma trận thứ hai: ";
    cin>>a2>>b2;
    cout << "Nhập các phần tử của ma trận thứ hai:" << endl;
    int mt2[a2][b2];
    for (int i = 0; i < a2; i++){
        for (int j = 0; j < b2; j++){
            cin>>mt2[i][j];
        }
    }
    if ( a1 != a2 || b1 != b2){
        cout<<"nhót"<<endl;
    } 
    else {
        int mt[a1][b1];
        for (int i = 0; i < a2; i++){
            for (int j = 0; j < b2; j++){
                mt[i][j] = mt1[i][j] + mt2[i][j];
            }
        }
        cout<<"mt + từ 2 mt là: "<<endl;
            for (int i = 0; i < a1; i++){
                for (int j = 0; j < b1; j++){
                    cout<< mt[i][j] << " ";
                }
                cout<<endl;
            }
    }
    return 0;
}