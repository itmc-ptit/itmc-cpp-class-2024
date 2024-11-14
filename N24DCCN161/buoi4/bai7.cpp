#include<iostream>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;
    if (a==0){
        if (b==0){
            cout<<"vo so nghiem"<<endl;
        }else{
            cout<<"vo nghiem"<<endl;
        }
    }else{
        cout<<"nghiem phuong trinh:"<<' '<<-b/(float)a<<endl;
    }
    return 0;
}