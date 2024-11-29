//Tìm giá trị lớn nhất và nhỏ nhất của mảng
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"nhập số lượng phần tử: ";
    cin>>a;
    int arr[a];

    cout<<"nhập số các phần tử: ";
    for (int i = 0; i < a; i++){
        cin>>arr[i];
    }
    int b = arr[0], c = arr[0];
    for (int i = 0; i < a; i++){
        if (arr[i] > b){
            b = arr[i];
        }
        if (arr[i] < c){
            c = arr[i];
        }
    }
    cout<<b<<" là số lớn nhất \n"<<c<<" là số bé nhất"<<endl;
    return 0;
}