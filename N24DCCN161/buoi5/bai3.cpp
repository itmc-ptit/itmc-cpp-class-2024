#include<iostream>
using namespace std;
int main(){
    int bangcuuchuong;
    for (int i=1; i<=9; i++){
        cout<<"bang cuu chuong "<<i<<endl;   
        for (int j=1; j<=10; j++){
            bangcuuchuong=i*j;
            cout<<bangcuuchuong<<endl;
        }
    }
    
    return 0;
}