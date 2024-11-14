#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<2){
        cout<<n<<"khong la so nguyen to"<<endl;
    }else{
        for(int i=2;i<=sqrt(n); i++){
            if (n%i==0){
                cout<<n<<' '<<"khong la so nguyen to"<<endl;
                return 0;
            }
        } 
        cout<<n<<' '<<"la so nguyen to"<<endl;
    }
    return 0;
}