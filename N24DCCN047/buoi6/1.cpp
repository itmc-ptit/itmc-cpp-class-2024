//Tính tổng, tích và giá trị trung bình của một mảng
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"nhập số lượng phần tử: ";
    cin>>a;

    int arr[a], t = 0;
    long long tich = 1;

    for (int i = 0; i < a; i++){
        cin>>arr[i];
        t += arr[i];
        tich *= arr[i];
    }
    
    cout<<"tổng: "<<t<<endl;
    cout<<"tích: "<<tich<<endl;
    cout<<"tb: "<< (float)t / a<<endl;
    
    return 0;
}