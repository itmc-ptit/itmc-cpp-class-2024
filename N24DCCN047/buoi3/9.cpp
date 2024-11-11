//Viết chương trình nhập vào một số thực. In ra phần thập phân của số đó.
#include <iostream>
using namespace std;
int main() {
    double a;
    cout<<"nhập một số thực: ";
    cin>>a;
    cout<<"phần thập phân của số thực là: "<<a-int(a);
    return 0;
}