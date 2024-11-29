#include<iostream>
using namespace std;
int main(){
    int sochan=0;
    int sole=0;
    
    while(true){
        int so;
        cout<<"Hay nhap so: ";
        cin>>so;
        if(so<0){
        break;
    }
        if(so %2 == 0){
        sochan ++;
        }
        if(so % 2 != 0){
        sole ++;
    }   
    }
    cout<<"So chan la: "<<sochan<<endl;
    cout<<"So le la: "<<sole;
    return 0;
}  //from thientan with lots of love <3         