#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a>b&&a>b&&a>c&&a>d){
        cout<<"MAX:"<<a<<endl;
    }else if (b>a&&b>c&&b>d){
        cout<<"MAX:"<<b<<endl;
    }else if (c>a&&c>b&&c>d){
        cout<<"MAX:"<<c<<endl;
    }else{
        cout<<"MAX:"<<d;
    }
    return 0;
}