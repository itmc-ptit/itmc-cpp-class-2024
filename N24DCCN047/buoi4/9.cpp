//Viết chương trình giải phương trình ax^2 + bx + c = 0 (Các hệ số a, b, c được nhập từ bàn phím). Nhớ xét cả trường hợp a = 0 thì sẽ ra sao
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"phương trình ax^2 + bx + c = 0, nhập các hệ số a, b, c:\n";
    cin>>a>>b>>c;

    if (a==0){
        if (b==0){
            if (c==0){
                cout<<"phương trình vô số nghiệm"<<endl;
            }
            else {
                cout<<"phương trình vô nghiệm"<<endl;
            }
        }
        else {
            float x = -c/b;
            cout <<"phương trình có một nghiệm x = "<<x<<endl;
        }
    }
    else {
        float dt = pow(b,2) - 4*a*c;

        if (dt<0){
            cout<<"phương trình vô nghiệm"<<endl;
        }
        else if (dt==0){
            float x = -b/(2*a);
            cout<<"phương trình có nghiệm kép x = "<<x<<endl;
        }
        else {
            float x = (-b + sqrt(dt))/2*a;
            float x1 = (-b - sqrt(dt))/2*a;
            cout<<"phương trình có hai nghiệm phần biết:\n"<<"x1= "<<x<<"\n"<<"x2= "<<x1<<endl;            
        }
    }
    return 0;
}