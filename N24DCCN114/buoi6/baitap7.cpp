#include <iostream>
using namespace std;
int main() 
{
    int dong1,dong2,cot1,cot2,a;
    cout <<"nhap so dong va cot cua ma tran 1: ";
    cin >>dong1>>cot1;
    cout <<"nhap so dong va cot cua ma tran 2: ";
    cin >>dong2>>cot2;
    int matran1[dong1][cot1];
    int matran2[dong2][cot2];
    cout <<"nhap cac phan tu cua ma tran 1: ";
    for (int i=0;i<dong1;i++)
    {
        for (int j=0;j<cot1;j++)
        {
            cin >>matran1[i][j];
        }
    }
    cout <<"nhap cac phan tu cua ma tran 2: ";
    for (int i=0;i<dong2;i++)
    {
        for (int j=0;j<cot2;j++)
        {
            cin >>matran2[i][j];
        }
    }
    if (dong1!=dong2||cot1!=cot2){   
        cout <<"2 ma tran khong cung kich thuoc";
    }
    else{
        for (int i=0;i<dong1;i++){
            for(int j=0;j<cot1;j++){
                    a=1;
                matran1[i][j]+=matran2[i][j];
            }

        }
        cout<<"tong cua 2 ma tran tren la "<<endl;
        for (int i=0;i<dong1;i++){
            for(int j=0;j<cot1;j++){
                cout <<matran1[i][j]<<" ";
            }
            cout <<endl;
        }
    }
}  
