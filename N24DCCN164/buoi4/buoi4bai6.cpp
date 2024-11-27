#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"nhap nam:";
    cin>>x;
    if(x%4==0&&x%100!=0||x%400==0){
        cout<<x<<"la nam nhuan";
    }else{
        cout<<"ko la nam nhuan";
    }
}