#include<iostream>
using namespace std;
int main(){
    int n,sole,sochan;
    while(n>=0){
        cout<<"nhap so am de ket thuc"<<endl;
        cout<<"nhap 1 so duong: ";cin>>n;
        if (n>=0){
        if(n%2) sochan+=1;
        else sole+=1;
        }
    }
    cout<<"so le: "<<sole<<endl;
    cout<<"so chan: "<<sochan<<endl;
}