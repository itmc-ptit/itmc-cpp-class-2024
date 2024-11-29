#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if (c>='a'&& c<='z'){
        cout<<c<<' '<<"la chu thuong"<<endl;
    }else{
        cout<<c<<' '<<"la chu in hoa"<<endl;
    }
    return 0;
}