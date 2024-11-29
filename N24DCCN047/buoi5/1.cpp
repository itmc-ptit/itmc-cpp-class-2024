//Đếm bao nhiêu số lẻ và bao nhiêu số chẳn do người dùng nhập từ bàn phím. (Chương trình kết thúc khi nhập số âm)
#include <iostream>
using namespace std;

int main(){

    int t, a = 0, b = 0;
    cout<<"Nhập các số nguyên (nhập số âm để kết thúc):\n1";
    while (true){
        cin>>t;
        if (t<0){
            break;
        }
        if (t%2==0){
            a++;
        }
        else {
            b++;
        }
    }

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}