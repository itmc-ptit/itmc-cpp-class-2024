#include<iostream>
using namespace std;
int countwords(string str){
    int dem=0;
    bool kt=false;
    for(char i: str){
        if(isspace(i)){
            kt=false;
        }
        else if(!kt){
            kt=true;
            dem++;
        }
    }
    return dem;
}
int main(){
    cout<<countwords("xin chao itmc ");
}