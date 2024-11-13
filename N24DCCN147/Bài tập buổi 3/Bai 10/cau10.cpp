#include <iostream>
using namespace std;
int main(){
    char a;
    cout <<" Nhap vao chu cai thuong: "; 
    cin >>a;
    a= (int)a - 32;
    cout<<"Chu cai hoa cua no la: " <<(char)a<< endl;
    char b;
    cout <<" Nhap vao chu cai hoa: "; 
    cin >>b;
    b= (int)b + 32;
    cout<<"Chu cai thuong cua no la: " <<(char)b<<endl;
  
  
    return 0; 
}