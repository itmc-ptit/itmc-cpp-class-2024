#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n%400==0)||((n%4==0)&&(n%100!=0))){
        cout<<n<<' '<<" La Nam Nhuan"<<endl;
    }else{
        cout<<n<<' '<<"Khong Phai Nam Nhuan"<<endl;
    }
    return 0;
}