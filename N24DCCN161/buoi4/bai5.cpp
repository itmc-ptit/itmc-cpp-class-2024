#include<iostream>
using namespace std;
int main(){
    int a=0;
    int max=0;
    cin>>max;
    cin>>a;
    if (a>max){
        max=a;
    }
    cin>>a;
    if (a>max){
        max=a;
    }
    cin>>a;
    if (a>max){
        max=a;
    }
    cout<<"MAX:"<<max<<endl;
    return 0;
}