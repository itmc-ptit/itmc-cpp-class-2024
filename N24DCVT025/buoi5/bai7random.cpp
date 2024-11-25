#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    random_device rd;  
    mt19937 gen(rd()); 
    uniform_int_distribution<> dis(0, 99);
    
    
    int r = dis(gen);
    cout<<"thu doan mot so nhe: ";cin>>n;
    while (n!=r){
        if (n<r){
            cout<<"ban can nhap so lon hon: ";cin>>n;
        } else if (n>r){
            cout<<"ban can nhap so nho hon: ";cin>>n;
        }
    }cout<<"dun roi so "<<r<<" do";
}