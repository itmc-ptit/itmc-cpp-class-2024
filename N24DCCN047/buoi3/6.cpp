//Viết chương trình nhập vào một số thực. In ra màn hình số đó(lấy 2 chữ số sau dấu thập phân)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double soThuc;

    cout<<"Nhập một số thực: ";
    cin>>soThuc;

    cout<<fixed<<setprecision(2);
    cout<<"Số thực đã nhập là: "<<soThuc<<endl; 

    return 0;
}
