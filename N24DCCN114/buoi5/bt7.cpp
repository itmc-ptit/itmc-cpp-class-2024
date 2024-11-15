#include <iostream>
using namespace std;
int main()
{
    int a;
    cout <<"moi nhap dap an ";
    cin >>a;
    while (a!=24)
    {
        if (a<24){
            cout <<"nho hon voi so can doan"<<endl;
        }
        else {
            cout <<"lon hon so voi dap an"<<endl;
        }
        cout <<"moi nhap lai dap an ";
        cin >>a;
    }
    if(a=24){
        cout <<"dap an chinh xac";
    }
}