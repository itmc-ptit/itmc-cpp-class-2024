//Tạo 2 biến kiểu số nguyên rồi hoàn đổi giá trị của 2 biến đó cho nhau(không sử dụng biến thứ 3)
#include <iostream>
using namespace std;

int main()
{
    int a = 30, b = 20;
    cout<<"giá trị ban đầu của các biến là: \n a = "<< a <<"\n b = "<< b << endl;

    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"giá trị sau của các biến là: \n a = "<< a <<"\n b = "<< b << endl;
    return 0;
}