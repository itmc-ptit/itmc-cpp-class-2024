#include<iostream>
using namespace std;
int main(){
    int answer=24;
    int guess;
    cout<<"GUESS THE RIGHT NUMBER"<<endl;
    do{
        cout<<"Hay nhap so du doan cua ban"<<endl;
        cin>>guess;
        if(guess < answer){
            cout<<"Chon so lon hon xiu nua di cu"<< endl;
        }else if (guess> answer){
            cout<<"Chon so be hon xiu nua di cu"<< endl;
        }else{
            cout<<"Gioi lam con trai cua ta";
        }
    }while(guess!=answer);
    return 0;
}