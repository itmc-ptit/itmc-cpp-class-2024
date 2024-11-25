#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d=0,s=0;
    while (n!=0){
        int i=n%10;
        if (i%2==0){
            d+=1;
        }else{
            s+=1;
        }
        n/=10; 
    }
    cout<<"so luong chan:"<<d<<endl;
    cout<<"so luong le:"<<s;
    return 0;
}