#include<iostream>
using namespace std;
int main(){
    int dapan=24;
    int n;
    cin>>n;
    while(n!=dapan){
        if (n>dapan){
            cout<<"lon hon so voi so can doan"<<endl;
        }else if(n<dapan){
            cout<<"nho hon so voi so can doan"<<endl;
        }
         cout<<"xin moi ban doan lai: ";
         cin>>n;
    }
    cout<<"chuc mung ban da doan trung"<<endl;
    return 0;
}