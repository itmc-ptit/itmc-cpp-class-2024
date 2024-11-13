#include<iostream>
using namespace std;
int main(){
    int n=24,x;
    cout<<"nhap 1 so bat ki: ";cin>>x;
    while (x!=n){
        if (x>n){
            cout<<"Lon hon voi so can doan"<<endl;
            cout<<"nhap 1 so bat ki: ";cin>>x;
        }
        else if(x<n){
            cout<<"Nho hon voi so can doan"<<endl;
            cout<<"nhap 1 so bat ki: ";cin>>x;
        }
    }
    cout<<"ban do doan dung!";
    
}