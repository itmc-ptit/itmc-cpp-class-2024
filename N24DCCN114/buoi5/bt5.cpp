#include <iostream>
using namespace std;
int kiemtra(int a,int i){
    int snt=1;
    for (int i=2;i<a;i++)
    {
        if (a%i==0)
        {
            snt=0;
            break;
        }
    }
    if (snt==1){
        cout <<a<<" ";
    }
    return 0;
}

int main()
{
    int n;
    cout <<"nhap vao 1 so n ";
    cin >>n;
    if(n<=2){
        cout <<"khong co so nguyen to nao nho hon "<<n;
    }
    else{
    cout <<"cac so nguyen to nho hon "<<n<<" la ";
    for (int i=2;i<n;i++){
        for (int j=1;j<i;j++)
        {
            kiemtra(i,j);
            break;
        }
    }
    }
}