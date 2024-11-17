#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"thu doan mot so nhe: ";cin>>n;
    while (n!=24){
        if (n<24){
            cout<<"ban can nhap so lon hon";cin>>n;
        } else if (n>24){
            cout<<"ban can nhap so nho hon";cin>>n;
        }
    }cout<<"dun roi so 24 do";
}