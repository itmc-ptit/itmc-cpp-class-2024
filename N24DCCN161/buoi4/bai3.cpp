#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=sqrt(n);
    if (s*s==n){
        cout<<n<<' '<<"la so chinh phuong"<<endl;
    }else{
        cout<<n<<' '<<"khong la so chinh phuong"<<endl;
    }
    return 0;

}