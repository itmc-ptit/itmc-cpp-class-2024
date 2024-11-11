//Tạo 2 biến kiểu số nguyên rồi hoán đổi giá trị của 2 biến đó cho nhau(cho sử dụng biến thứ 3)
#include <iostream>
using namespace std;

int main()
{
    int a = 6, b= 10;
    cout<<"giá trị ban đầu của các biến là: \n a = "<< a <<"\n b = "<< b << endl;
    
    int c = a;
    a = b;
    b = c;
    cout<<"giá trị sau của các biến là: \n a = "<< a <<"\n b = "<< b << endl;
    return 0;
}
